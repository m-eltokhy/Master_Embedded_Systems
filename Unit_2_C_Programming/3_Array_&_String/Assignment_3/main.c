/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	int i,j,r,c,m[100][100];
	printf("Enter the rows and columns of the matrix :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&r);
	scanf("%d",&c);
	printf("Enter Elements of matrix:\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter a%d%d : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&m[i][j]);
		}
	}
	printf("Entered matrix:\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	printf("transposed matrix:\n");
	fflush(stdin);fflush(stdout);
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d\t",m[j][i]);
		}
		printf("\n");
	}
	return 0;
}

