/*
 ============================================================================
 Name        : EvenOrOdd.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main() {

	int num;

	printf("Inter an integer to check :");
	fflush(stdout);
	scanf("%d",&num);

	if((num%2)==0)

		printf("The number is Even");

	else

			printf("The number is Odd");

	return 0;
}
