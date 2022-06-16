/*
 * main.c
 *
 *  Created on: Jun 16, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>

int checkPrim(int);

int main(){
	int a,b;
	printf("Enter Two Numbers:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&a,&b);
	fflush(stdin);fflush(stdout);
	printf("Prime Numbers Between %d and %d are\n",a,b);
	fflush(stdin);fflush(stdout);
	for(int i=a;i<=b;i++){
		if(checkPrim(i)){
			printf("%d ",i);
		}
	}
	return 0;
}

int checkPrim(int x){
	for(int i=2;i<x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
