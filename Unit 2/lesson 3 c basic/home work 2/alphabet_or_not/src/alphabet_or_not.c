/*
 ============================================================================
 Name        : alphabet_or_not.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char c ;
	printf("Enter A Character To Check :" );
	fflush(stdout);
	scanf("%c",&c);
	if(c>='A'&& c<='Z')
		printf("The Character %c Is Alphabet",c);
	else
		printf("The Character %c Is Not Alphabet",c);

	return 0;
}
