/*
 ============================================================================
 Name        : frequency.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char c[1000],ch;
	int i,count;
	printf("Enter a string :");
	fflush(stdout);
	gets(c);
	printf("Enter a character to find frequency :");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&ch);

	for(i=0; c[i]!='\0';++i)
	{
		if(ch==c[i])
		++count;
	}
	fflush(stdout);
	printf("Frequency of %c=%d",ch,count);
	return 0;
}
