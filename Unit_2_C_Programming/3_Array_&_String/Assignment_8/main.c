/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>
#include <string.h>

int main(void){
	char str[100]={0},rev[100]={0};
	int i,n;
	printf("Enter a string :\n");
	fflush(stdin);fflush(stdout);
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++){
		rev[i]=str[n-i-1];
	}
	printf("reverse string is \n%s",rev);
	return 0;
}

