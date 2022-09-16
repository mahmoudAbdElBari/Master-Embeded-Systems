/*
 ============================================================================
 Name        : vowel_consonant.c
 Author      : mooody
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {
	char c;

	printf("Enter the character :");
		fflush(stdout);
	scanf("%c",&c);

	if(c=='a'||c=='A'||c=='o'||c=='O'||c=='e'||c=='E'||c=='i'||c=='I'||c=='u'||c=='U')

		printf("the character is: vowel");
	else

		printf("the character is: consonant");

	return 0;

}
