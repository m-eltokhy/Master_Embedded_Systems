/*
 * main.c
 *
 *  Created on: Oct 12, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

#define pi 3.14159265
#define area pi*r*r

int main()
{
	int r;
	printf("enter the radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&r);
	printf("Area = %.2f",area);
    return 0;
}

