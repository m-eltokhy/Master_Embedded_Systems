/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>

int main(void){
	int x;
		printf("Please enter an integer:\n");
		scanf("%d",&x);
		fflush(stdin);fflush(stdout);
		printf("You entered: %d",x);
		return 0;
}
