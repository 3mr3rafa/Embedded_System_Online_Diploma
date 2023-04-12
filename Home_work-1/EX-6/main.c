/*
 * main.c
 *
 *  Created on: Apr 10, 2023
 *      Author: 3rafa
 */
#include<stdio.h>
void main()
{
	float a,b,c;
	printf(" Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf(" Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	c=a,a=b,b=c;
	printf(" After swapping, value of a = %f \n After swapping, value of b = %f",a,b);





}

