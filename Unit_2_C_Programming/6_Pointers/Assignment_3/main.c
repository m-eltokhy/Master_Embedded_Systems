/*
 * main.c
 *
 *  Created on: Nov 5, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	fflush(stdin);fflush(stdout);
	puts("Input a string : ");
	fflush(stdin);fflush(stdout);
	gets(str);
	fflush(stdin);fflush(stdout);
	puts("Reverse of the string :");
	fflush(stdin);fflush(stdout);
	int length=strlen(str)-1;
	char *ptr=&str[length];
	while(length>=0){
		printf("%c",*ptr);
		ptr--;
		length--;
	}
    return 0;
}
