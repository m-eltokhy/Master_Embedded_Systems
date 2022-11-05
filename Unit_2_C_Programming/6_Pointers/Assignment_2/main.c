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
	char str[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char *ptr=str;
	printf("The Alphabets are :\n");
	for(int i=0;i<strlen(str);i++){
		printf("%c\t",*ptr);
		ptr++;
		if(*ptr=='S')
			printf("\n");
	}

    return 0;
}
