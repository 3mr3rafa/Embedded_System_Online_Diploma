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
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c",&x);
	if(x>=97&&x<=122)
		printf("%c is an alphabet",x);
	else
		printf("%c is not an alphabet",x);


}



