/*
 ============================================================================
 Name        : factorial_number.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, count ,fact=1 ;
	printf("Enter An Integer :" );
	fflush(stdout);
	scanf("%d",&n);

	for(count=1; count<=n; count++)
	{
		fact*=count;
	}
	printf("The Factorial Number Is %d :",fact );

	return 0;
}
