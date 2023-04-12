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
	printf(" Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b&&a>c)
		printf("largest number = %f",a);
	else if(b>a&&b>c)
		printf("largest number = %f",b);
	else
		printf("largest number = %f",c);


}

