/*
 * main.c
 *
 *  Created on: Oct 12, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

union job{
    char name[32];
    float salary;
    int worker_no;
}u;
struct job1{
    char name[32];
    float salary;
    int worker_no;
}s;

int main()
{
    printf("Size of Union = %d\n",sizeof(u));       /*this line will print out 32 duo to it's largest
     element int the union char name[32] */
    printf("Size of Structure = %d\n",sizeof(s));   /*but this line will print 40 because the struct
     adds all the sizes of it's attributes in increments of it's largest attribute in size 4 in this case
     so the size will be 32+4+4=40 */
    return 0;
}

