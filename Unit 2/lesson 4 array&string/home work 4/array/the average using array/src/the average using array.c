/*
 ============================================================================
 Name        : the.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int n,i;
	float num[100],sum=0.0,average;
	printf("Enter the numbers of data:");
	fflush(stdout);
	scanf("%d",&n);

	while(n>100||n<=0)
		{

		printf("Error! number should be in range of (1 to 100.\n");
		printf("Enter the number again :");
		fflush(stdout);
		scanf("%d",&n);

		}


	for(i=0; i<n; ++i )
	{
		printf("Enter the value of %d",i+1);
		fflush(stdout);
		scanf("%f",&num[i]);
		sum+=num[i];
	}

	average=sum/n;
	printf("The average is: =%.2f",&average);

	return 0;
}
