/*
 ============================================================================
 Name        : largest.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a,b,c ;

	printf("Enter 3 Num:");
	fflush(stdout);
	scanf("%f""%f""%f",&a,&b,&c);

	if(a>b)
	{ if(a>c)
		printf("%f Is the largest Num",a);
	else
		printf("%f Is the largest Num",c);
	}

	if(b>a)
		{ if(b>c)
			printf("%f Is the largest Num",b);
		else
			printf("%f Is the largest Num",c);
		}

}
