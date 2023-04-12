/*
 * main.c
 *
 *  Created on: Apr 10, 2023
 *      Author: 3rafa
 */
#include<stdio.h>
void main()
{
	int y;
	printf("Enter an integer you want check: ");
	fflush(stdin),fflush(stdout);
	scanf("%d",&y);


	if((y % 2) == 0)
		printf("%d is even",y);

	else
		printf("%d is odd",y);

}


