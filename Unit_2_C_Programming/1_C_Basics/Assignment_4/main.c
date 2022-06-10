/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>

int main(void){
	float x,y;
	printf("Please enter Two Numbers:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f\n%f",&x,&y);
	fflush(stdin);fflush(stdout);
	printf("Product = %f\n",x*y);
	return 0;
}
