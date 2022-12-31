/*
 ============================================================================
 Name        : length.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
//,i
	char s[1000];
	printf("Enter a string :");
	fflush(stdout);
	fflush(stdin);
	scanf("%s",s);
//	for(i=0; s[i]!='\0'; ++i);
//	printf("Length of string : %d",i);

	printf("Length of string : %d",strlen(s));

//	using properties:strlen()




	return 0;
}
