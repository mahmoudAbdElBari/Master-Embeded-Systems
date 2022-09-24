/*
 ============================================================================
 Name        : sum_of_nutural_number.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n ,count , sum=0 ;
	printf("Enter An Integer :" );
	fflush(stdout);
	scanf("%d",&n);

	for(count=1; count<=n; count++)
	{
		sum+=count;
	}

	printf("The Sum Is %d :",sum );
	return 0;
}
