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
	unsigned int mark;
};

int main()
{
	struct Sstudent s1[10];
	printf("Enter information of students :\n");
	for(int i=0;i<10;i++){
	    printf("For roll number %d :\n",i+1);
	    s1[i].roll=i+1;
	    printf("Enter name : ");
	    fflush(stdin);fflush(stdout);
	    scanf("%s",s1[i].FirstName);
	    printf("Enter marks : ");
	    fflush(stdin);fflush(stdout);
	    scanf("%d",&s1[i].mark);
	}
	for(int i=0;i<10;i++){
	    printf("Information for roll number %d :\n",s1[i].roll);
	    printf("Name : %s\n",s1[i].FirstName);
	    printf("Marks : %d\n",s1[i].mark);
	}
    return 0;
}

