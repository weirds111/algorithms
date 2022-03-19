/*******************************************************
* Author: Michael Cheung
* file name: Euclid.cpp
* Description: This source file contains a function that
*			   finds the largest GCD between two numbers.
* 
* Reference: Taken from "The Art of Computer Programming"
*			 Volume 1 Fundamental Algorithms 3rd Ed 
*			 by Donald E. Knuth
* 
* Version: v1.2 
* Date updated: 3/18/2022
*******************************************************/
#include <iostream>
#include <stdio.h>
using namespace std;

//This function returns the Greatest Common Divisor between two positive integers m and n.
int euclidAlgorithm(int m, int n);


int main() {
	int m = 30, n = 12;
	printf("The numbers %d  and %d should have GCD 6.\n", m, n);

	//Ensure m > n to decrease running time by 1/2 in all cases.
	if (n > m) {
		int temp = m;
		m = n;
		n = temp;
	}

	printf("The GCD is %d.\n", euclidAlgorithm(m, n));
}


//@brief function returns GCD between positive two integers
//@parameters two postive integers m & n
//@returns a positive integer or returns -1 if parameters are zero or less.
int euclidAlgorithm(int m, int n) {
	//This algorithm doesn't work if m & n are not positive integers
	if (m <= 0 || n <= 0) {
		return -1;
	}
	int GCD = m % n;
	if (GCD == 0) {
		return n;
	}
	m = n;
	n = GCD;
	euclidAlgorithm(m, n);
}

//TODO algorithm analysis