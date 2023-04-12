/*
 * main.c
 *
 *  Created on: Apr 10, 2023
 *      Author: 3rafa
 */
#include<stdio.h>
void main()
{
	char x;
	printf("Enter a alphabet: ");
	fflush(stdout);
	scanf("%c",&x);
	switch(x)
	{
	case 'a':
	case 'o':
	case 'u':
	case 'e':
	case 'i':
		printf("%c is a vowel",x);
		break;
	default :
		printf("%c is a consonant",x);
	}
}

