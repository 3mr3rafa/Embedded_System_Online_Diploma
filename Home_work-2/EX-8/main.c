/*
 * main.c
 *
 *  Created on: Apr 10, 2023
 *      Author: 3rafa
 */
#include<stdio.h>
void main()
{
	float x,y;
	char z;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c",&z);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	switch(z)
	{
	case '+' :
		printf("%f + %f = %f",x,y,x+y);
		break;
	case '-' :
		printf("%f - %f = %f",x,y,x-y);
		break;

	case '*' :
		printf("%f * %f = %f",x,y,x*y);
		break;

	case '/' :
		printf("%f / %f = %f",x,y,x/y);
		break;

	}
}


