/*
 * main.c
 *
 *  Created on: Jun 16, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>

int power(int,int);

int main(){
	int b,p;
	printf("Enter base number:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&b);
	printf("Enter power number\"positive integer\":\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&p);
	fflush(stdin);fflush(stdout);
	printf("%d^%d = %d",b,p,power(b,p));
	return 0;
}

int power(int x,int y){
	if(y==0)
		return 1;
	return x*power(x,y-1);
}
