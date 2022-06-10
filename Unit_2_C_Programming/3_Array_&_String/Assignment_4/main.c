/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void) {
	int i,n,arr[100],e,p;
	printf("Enter number of elements :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter element %d : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be inserted :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);
	printf("Enter position to be inserted in :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&p);
	if(p>n+1)
		printf("Error no such position");
	else{
		for(i=n;i>p-1;i--){
			arr[i]=arr[i-1];
		}
		arr[p-1]=e;
		printf("New elements are :\n");
		fflush(stdin);fflush(stdout);
		for(i=0;i<n+1;i++){
			printf("%d\t",arr[i]);
			fflush(stdin);fflush(stdout);
		}
	}
	return 0;
}

