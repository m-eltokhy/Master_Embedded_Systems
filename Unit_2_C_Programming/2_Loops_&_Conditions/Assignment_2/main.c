/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	char x;
	printf("Enter an alphabet:\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	fflush(stdin);fflush(stdout);
	printf("%c is a ",x);
	switch(x){
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'O':
	case 'o':
	case 'I':
	case 'i':
	case 'U':
	case 'u':
		printf("vowel");
		break;
	default:
		printf("consonant");
		break;
	}
	return 0;
}
