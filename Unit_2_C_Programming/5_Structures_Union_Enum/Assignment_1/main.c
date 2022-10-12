/*
 * main.c
 *
 *  Created on: Oct 12, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

struct Sstudent{
	unsigned char FirstName[100];
	unsigned int roll;
	float mark;
};

int main()
{
	struct Sstudent s1;
    printf("Enter information of student :\n");
	fflush(stdout);fflush(stdin);
    printf("Enter name :  ");
	fflush(stdout);fflush(stdin);
    scanf("%s",s1.FirstName);
    printf("Enter roll number :  ");
	fflush(stdout);fflush(stdin);
    scanf("%d",&s1.roll);
    printf("Enter marks :  ");
	fflush(stdout);fflush(stdin);
    scanf("%f",&s1.mark);
    printf("Displaying information :\n");
	fflush(stdout);fflush(stdin);
    printf("name : %s\n",s1.FirstName);
    printf("roll : %d\n",s1.roll);
    printf("marks : %.2f\n",s1.mark);
	fflush(stdout);fflush(stdin);
    return 0;
}
