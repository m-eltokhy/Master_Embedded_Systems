/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>

int main(void){
	int x,sum;
	printf("enter an integer :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);
	for(sum=0;x>0;x--){
		sum+=x;
	}
	printf("sum = %d",sum);
	return 0;
}