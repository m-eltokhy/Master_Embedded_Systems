/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>

int main(void){
	int x,y;
	printf("Please enter Two integer:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d \n%d",&x,&y);
	fflush(stdin);fflush(stdout);
	printf("Sum = %d",x+y);
	return 0;
}
