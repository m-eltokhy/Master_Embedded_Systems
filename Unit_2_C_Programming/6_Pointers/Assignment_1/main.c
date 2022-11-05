/*
 * main.c
 *
 *  Created on: Nov 5, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>

int main()
{
	int m=29;
	int *ab=&m;
    printf("Address of m : 0X%p\n",&m);
    printf("Value of m : %d\n\n",m);

    printf("Now ab is assigned with the address of m.\n");
    printf("Address of ab : 0X%p\n",ab);
    printf("Content of pointer ab : %d\n\n",*ab);

    m=34;
    printf("The value of m assigned to 34 now.\n");
    printf("Address of ab : 0X%p\n",ab);
    printf("Content of pointer ab : %d\n\n",*ab);

    *ab=7;
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Address of m : 0X%p\n",&m);
    printf("Value of m : %d\n\n",m);

    return 0;
}

