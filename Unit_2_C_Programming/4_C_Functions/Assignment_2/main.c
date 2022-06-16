/*
 * main.c
 *
 *  Created on: Jun 16, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>

int fact(int);

int main(){
	int x;
	printf("Enter a positive integer:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x<0){
		printf("You entered a negative number.");
		return 0;
	}
	printf("Factorial of %d = %d",x,fact(x));
	return 0;
}

int fact(int x){
	if(x==0)
		return 1;
	return x*fact(x-1);
}
