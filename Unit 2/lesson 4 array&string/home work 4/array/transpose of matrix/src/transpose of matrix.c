/*
 ============================================================================
 Name        : transpose.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {

	float a[3][3], trans[3][3] ;
	int   i , j ;
//	int r,c;
	// Number of R,C
	//	printf("Enter rows and column of matrix : ");
	//	fflush(stdout);
	//	fflush(stdin);
	//	scanf("%d , %d",&r,&c);

	//elements
	//	printf("\n Enter elements of matrix");
	for(i=0; i<3; i++)
	{for(j=0; j<3; j++)
	{
		printf("Enter elements a %d%d :",i+1,j+1);
		fflush(stdout);
		fflush(stdin);
		scanf("%f",&a[i][j]);	} }

	//Showing it

	printf("\n **you entered a matrix: \n\n");
	for(i=0; i<3; i++)
	{for(j=0; j<3; j++)
	{
		printf("\t %2.2f\t",a[i][j]);
		//			if(j==c-1)

	}printf("\n\n");}



	//transpose


	for(i=0; i<3; i++)
	{for(j=0; j<3; j++)
	{
		trans[i][j]=a[j][i];
	}
	}

	//Show it

	printf("\n **The transpose of matrix :\n\n");
	for(i=0; i<3; i++)
	{for(j=0; j<3; j++)
	{
		printf("\t %2.2f\t",trans[i][j]);
		//			if(j==r-1)

	}				printf("\n\n");
	}

	return 0;
}
