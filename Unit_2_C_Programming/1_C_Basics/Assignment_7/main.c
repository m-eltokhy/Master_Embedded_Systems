/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	int a,b;
	printf("Enter value of a:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	fflush(stdin);fflush(stdout);
	printf("Enter value of b:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&b);
	fflush(stdin);fflush(stdout);
	a+=b;
	b=a-b;
	a-=b;
	printf("After swapping value of a = %d and value of b = %d\n",a,b);
	return 0;
}

