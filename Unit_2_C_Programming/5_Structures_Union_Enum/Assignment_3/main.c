/*
 * main.c
 *
 *  Created on: Oct 12, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

struct Scomplex{
	float real;
	float img;
};

int main()
{
	struct Scomplex c1,c2,sum;
    printf("Enter First complex number :\n");
    printf("Enter real and imaginary respectively : ");
    fflush(stdout);fflush(stdin);
    scanf("%f %f",&c1.real,&c1.img);
    printf("Enter Second complex number :\n");
    printf("Enter real and imaginary respectively : ");
    fflush(stdout);fflush(stdin);
    scanf("%f %f",&c2.real,&c2.img);
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;
    printf("Sum = %.1f + %.1fi\n",sum.real,sum.img);
    return 0;
}

