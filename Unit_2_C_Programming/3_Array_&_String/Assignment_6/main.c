/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>
#include <string.h>

int main(void){
	char str[100],ch;
	int i,ctr=0;
	printf("Enter a string :\n");
	fflush(stdin);fflush(stdout);
	gets(str);
	printf("Enter a character : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	for(i=0;i<strlen(str);i++){
		if(str[i]==ch)
			ctr++;
	}
	printf("The frequency of %c = %d",ch,ctr);

	return 0;
}

