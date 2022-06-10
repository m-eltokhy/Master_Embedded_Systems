/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */


#include <stdio.h>

int main(void){
	char x;
	printf("Enter a character:\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	fflush(stdin);fflush(stdout);
	printf("ASCII value of %c = %d\n",x,x);
	return 0;
}
