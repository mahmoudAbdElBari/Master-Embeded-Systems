/*
 ============================================================================
 Name        : the_Average_Students_Degrees.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int nstudent;
	float sum=0,degree;

	printf("Enter Number Of Student :" );
	fflush(stdout);
	scanf("%d",&nstudent);

	for(int i=1; i<=nstudent; i++)
	{
		printf("Enter Student Degree :" );
		fflush(stdout);
		scanf("%f",&degree);
		sum+=degree;
	}

	printf("The Average Students Degrees Is:%f",sum/nstudent );







	return 0;
}
