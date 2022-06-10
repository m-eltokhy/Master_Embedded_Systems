<<<<<<< HEAD
/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	float x,y,z;
	printf("please enter three numbers :\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	fflush(stdin);fflush(stdout);
	printf("The largest number is ");
	if(x>=y){
		if(x>=z)
			printf("%.2f",x);
		else
			printf("%.2f",z);
	}else{
		if(y>=z)
			printf("%.2f",y);
		else
			printf("%.2f",z);
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
	float x,y,z;
	printf("please enter three numbers :\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	fflush(stdin);fflush(stdout);
	printf("The largest number is ");
	if(x>=y){
		if(x>=z)
			printf("%.2f",x);
		else
			printf("%.2f",z);
	}else{
		if(y>=z)
			printf("%.2f",y);
		else
			printf("%.2f",z);
	}
	return 0;
}
>>>>>>> b6e6b1c99149d3de51bcd8b6d2d7179cacb9e6d2
