/*
 * main.c
 *
 *  Created on: Nov 5, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>

int main()
{
	int arr[15],s,i;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s);
	fflush(stdin);fflush(stdout);
	printf("Input %d number of elements in the array :\n",s);
	for(i=0;i<s;i++){
		printf("element - %d : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("The elements of array in reverse order are :\n");
	for(i=s-1;i>=0;i--){
		printf("element - %d : ",i+1);
		fflush(stdin);fflush(stdout);
		printf("%d\n",arr[i]);
	}
    return 0;
}
