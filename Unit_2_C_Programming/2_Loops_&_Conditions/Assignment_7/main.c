<<<<<<< HEAD
/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>

int main(void){
	int x,fact;
	printf("enter an integer :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);
	if(x<0)
		printf("Error!!! factorial of a negative number doesn't exist.");
	else{
		for(fact=1;x>0;x--){
			fact*=x;
		}
		printf("factorial = %d",fact);
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
	int x,fact;
	printf("enter an integer :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);
	if(x<0)
		printf("Error!!! factorial of a negative number doesn't exist.");
	else{
		for(fact=1;x>0;x--){
			fact*=x;
		}
		printf("factorial = %d",fact);
	}
	return 0;
}
>>>>>>> b6e6b1c99149d3de51bcd8b6d2d7179cacb9e6d2
