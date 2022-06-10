<<<<<<< HEAD
/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

int main(void){
	signed int x;
	printf("please enter a number :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);
	if(x==0)
		printf("You have entered Zero.\n");
	else if(x>0)
		printf("%d is Positive.\n",x);
	else
		printf("%d is Negative.\n",x);
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
	signed int x;
	printf("please enter a number :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);
	if(x==0)
		printf("You have entered Zero.\n");
	else if(x>0)
		printf("%d is Positive.\n",x);
	else
		printf("%d is Negative.\n",x);
	return 0;
}
>>>>>>> b6e6b1c99149d3de51bcd8b6d2d7179cacb9e6d2
