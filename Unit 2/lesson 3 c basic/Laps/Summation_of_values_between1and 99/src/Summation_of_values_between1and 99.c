/*
 ============================================================================
 Name        : Summation_of_values_between1and.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,sum=0;

	for(i=1; i<=99; i++)
	{
		sum+=i;
	}
	printf("Summation of values between 1 and 99 is : %d",sum );

	return 0;
}
