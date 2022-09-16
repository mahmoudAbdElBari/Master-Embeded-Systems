/*
 ============================================================================
 Name        : positiveornegative.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {

	float num ;

	printf("Enter your number: ");
	fflush(stdout);
	scanf("%f",&num);

	if(num>=0)
	{if(num==0)
		printf("You Entered Zero");
	else
		printf("Positive Number");
		}

	else
		printf("Negative Number");

	return 0;
}
