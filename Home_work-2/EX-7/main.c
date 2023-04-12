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
	int n,sum=1;
	fflush(stdout);

	scanf("%d",&n);
	fflush(stdout);
	if(n>0)
	{
		for(int i=1;i<=n;i++)
		{
			sum*=i;
		}
		printf("sum = %d",sum);
	}
	else
		printf("error!!!Factorial of negative number doesn't exist");

}


