/*
 ============================================================================
 Name        : search_for_element_in_array.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int num ,i ,arr[30], ele;
	printf("Enter number of elements :");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);


//	//show values
	printf("Enter the values in range lower than %d:\n",num);
	for(i=0; i<num; i++)
	{	fflush(stdout);
		fflush(stdin);
		scanf("%d",&arr[i]);
	}

	//find element

	printf("Enter the elements to be searched :");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&ele);

	//Important
	i=0;
	while (i<num && ele != arr[i])
	{
		i++;
	}

	if(i<num)
	{
		printf("Number found at the location = %d",i+1);
	}

	else{printf("Number not found");}


	return 0;
}
