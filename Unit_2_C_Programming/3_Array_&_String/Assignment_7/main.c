<<<<<<< HEAD
/*
 * main.c
 *
 *  Created on: Jun 10, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>
#include <string.h>

int main(void){
	char str[100];
	int i;
	printf("Enter a string :\n");
	fflush(stdin);fflush(stdout);
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf("length of string = %d\n",i);
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
#include <string.h>

int main(void){
	char str[100];
	int i;
	printf("Enter a string :\n");
	fflush(stdin);fflush(stdout);
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf("length of string = %d\n",i);
	return 0;
}

>>>>>>> b6e6b1c99149d3de51bcd8b6d2d7179cacb9e6d2
