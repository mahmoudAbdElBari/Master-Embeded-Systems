/*
 ============================================================================
 Name        : the_minimum_of_two_number.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int a,b;
	printf("Enter Two Number :" );
	fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("The Minimum Of Two Number is %d \r\n :",(a<b)?a:b );

	return 0;
}
