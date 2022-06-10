/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	int i;
	printf("Enter a string :\n");
	fflush(stdin);fflush(stdout);
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf("length of string = %d\n",i);
	return 0;
}
