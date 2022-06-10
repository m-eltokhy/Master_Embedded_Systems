<<<<<<< HEAD
/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	float m1[100][100],m2[100][100],sum[100][100];
	int r,c;
	printf("Enter Elements of first matrix:\n");
	fflush(stdin);fflush(stdout);
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("enter a%d%d : ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&m1[r][c]);
		}
	}
	printf("Enter Elements of second matrix:\n");
	fflush(stdin);fflush(stdout);
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("enter b%d%d : ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&m2[r][c]);
		}
	}
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			sum[r][c]=m1[r][c]+m2[r][c];
		}
	}
	printf("The sum of two matrixes =\n");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%f\t",sum[r][c]);
		}
		printf("\n");
	}

	return 0;
}
=======
/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	float m1[100][100],m2[100][100],sum[100][100];
	int r,c;
	printf("Enter Elements of first matrix:\n");
	fflush(stdin);fflush(stdout);
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("enter a%d%d : ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&m1[r][c]);
		}
	}
	printf("Enter Elements of second matrix:\n");
	fflush(stdin);fflush(stdout);
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("enter b%d%d : ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&m2[r][c]);
		}
	}
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			sum[r][c]=m1[r][c]+m2[r][c];
		}
	}
	printf("The sum of two matrixes =\n");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%f\t",sum[r][c]);
		}
		printf("\n");
	}

	return 0;
}
>>>>>>> b6e6b1c99149d3de51bcd8b6d2d7179cacb9e6d2
