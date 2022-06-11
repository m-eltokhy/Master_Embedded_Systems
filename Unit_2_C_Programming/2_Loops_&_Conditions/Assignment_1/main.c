/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	int x;
	printf("Enter an integer you want to check:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);
	printf("%d is ",x);
	if(x%2)
		printf("odd.");
	else
		printf("even.");
	return 0;
}