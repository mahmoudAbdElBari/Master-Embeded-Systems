/*
 ============================================================================
 Name        : circle_area_or_circumference.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char choice ;
	float r ;

	printf("Enter The Length of Radius :" );
	fflush(stdin);fflush(stdout);
	scanf("%f",&r);

	printf("Enter The operation you want ('a'for circle area) or ('c' for circumference) :" );
	fflush(stdin);fflush(stdout);
	scanf("%c",&choice);

	if(choice=='a')
		{printf("The circle area is(3.14 * %.2f * %.2f = %.2f) :",r,r,3.14*r*r);}
	else if(choice=='c')
		{printf("The circle circumference is(2 * 3.14 * %.2f = %.2f) :",r,2*3.14*r);}
	else
		printf("!Wrong Choice ");



	return 0;
}
