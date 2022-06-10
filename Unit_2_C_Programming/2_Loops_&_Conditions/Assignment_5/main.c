/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	char x;
	printf("please enter a character :\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	fflush(stdin);fflush(stdout);
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
		printf("%c is an alphabet",x);
	else
		printf("%c is not an alphabet",x);
	return 0;
}

