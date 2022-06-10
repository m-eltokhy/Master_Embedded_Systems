/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	int n,arr[100],i,e;
	printf("Enter number of elements :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter element %d : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to search for :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);
	for(i=0;i<n;i++){
		if(arr[i]==e){
			printf("Number found at the location %d",i+1);
			return 0;
		}
	}
	printf("Number wasn't found");

	return 0;
}
