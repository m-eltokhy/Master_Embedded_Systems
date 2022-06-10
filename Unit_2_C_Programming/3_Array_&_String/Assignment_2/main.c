/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	int n,i;
	float arr[100],sum=0.0;
	printf("Enter the number of Elements :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter element number %d : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("the average = %.2f",sum/n);

	return 0;
}