/*
 * main.c
 *
 *  Created on: Apr 10, 2023
 *      Author: 3rafa
 */
#include<stdio.h>
void main()
{
	printf("Enter an integer: ");
	int n,sum=0;
	fflush(stdout);

	scanf("%d",&n);
	fflush(stdout);
	for(int i=0;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);
}

