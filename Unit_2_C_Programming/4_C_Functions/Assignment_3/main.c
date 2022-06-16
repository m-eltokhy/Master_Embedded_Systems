/*
 * main.c
 *
 *  Created on: Jun 16, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>
#include <string.h>

void rev(char*,int);

int main(){
	char str[100];
	printf("Enter a sentence:\n");
	fflush(stdin);fflush(stdout);
	gets(str);
	rev(str,strlen(str));
	return 0;
}

void rev(char *str,int len){
	if(len==0){
		return;
	}
	printf("%c",str[len-1]);
	rev(str,len-1);
}
