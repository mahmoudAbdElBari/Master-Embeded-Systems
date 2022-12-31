/*
 ============================================================================
 Name        : insert_element_in_array.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int num,i ,insert ,location ,arr[30];

	//show elements
	printf("Enter number of element :");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);

	for(i=0; i<=num; i++)
	{
//		printf("%d",arr[i]);
//		fflush(stdout);
//		fflush(stdin);
		scanf("%d",&arr[i]);
	}

	//the number wanted to insert
	printf("Enter **element** want to be inserted:");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&insert);

	//define the location
	printf("Enter **location** want to be inserted In :");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&location);

	//create a space in the specific location (**IMPORTANT*)

	for(i=num; i>=location; i--)
	{
		arr[i]= arr[i-1];

	}
	++num;
	arr[location-1]=insert;


	//Finally result:

	for(i=0; i<=num; i++)
	{printf("%d",arr[i]);
	}




	return 0;
}
