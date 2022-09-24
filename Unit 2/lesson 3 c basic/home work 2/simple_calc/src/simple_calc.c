/*
 ============================================================================
 Name        : simple_calc.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char o ;
	float num1 , num2 ;

	printf("First Enter Operation like +or-or*or/ :" );
	fflush(stdout);
	scanf("%c",&o);

	printf("Enter Like (num1 , num2) :" );
	fflush(stdout);
	scanf("%f,%f",&num1 , &num2 );

	switch(o){
	case '+':
		   printf("Summation %.1f+%.1f=%.1f",num1 , num2 ,num1 + num2);
	break;

	case '-':
			printf("Subtraction %.1f-%.1f=%.1f",num1 , num2 ,num1 - num2);
	break;

	case '*':
			printf("Multiplication %.1f*%.1f=%.1f",num1 , num2 ,num1 * num2);
	break;

	case '/':
			printf("Devision %.1f/%.1f=%.1f",num1 , num2 ,num1 / num2);
	break;

	defult:
	printf("Error! Operator not correct");
	break;

	}

	return 0;
}
