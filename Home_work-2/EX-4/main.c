/*
 * main.c
 *
 *  Created on: Apr 10, 2023
 *      Author: 3rafa
 */
#include<stdio.h>
int main()
{
	float x;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&x);
	if(x>0)
		printf("%f is positive",x);
	else if(x<0)
		printf("%f is negative",x);
	else
		printf("you entered zero");

}

