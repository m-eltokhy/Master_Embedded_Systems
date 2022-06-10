/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	char c;
	float x,y;
	printf("enter an operator (+,-,*,/):\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	fflush(stdin);fflush(stdout);
	if(c!='+'||c!='-'||c!='*'||c!='/')
		printf("Error Wrong Operator\n");
	else{
		printf("enter two numbers :\n");
		fflush(stdin);fflush(stdout);
		scanf("%f",&x);
		scanf("%f",&y);
		switch(c){
		case '+':
			printf("%.2f + %.2f = %.2f",x,y,x+y);
			break;
		case '-':
			printf("%.2f - %.2f = %.2f",x,y,x-y);
			break;
		case '*':
			printf("%.2f * %.2f = %.2f",x,y,x*y);
			break;
		case '/':
			printf("%.2f / %.2f = %.2f",x,y,x/y);
			break;
		}
	}
	return 0;
}

