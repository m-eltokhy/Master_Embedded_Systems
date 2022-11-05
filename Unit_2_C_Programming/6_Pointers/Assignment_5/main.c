/*
 * main.c
 *
 *  Created on: Nov 5, 2022
 *      Author: M.Eltokhy
 */

#include <stdio.h>

typedef struct{
	char name[10];
	int id;
}Sstudent;

int main()
{
	Sstudent arr[3]={{"Mo",1000},{"eltokhy",1001},{"Alex",1002}};
	Sstudent *ptr=arr;
	for(int i=0;i<3;i++){
		printf("ExmployeeName : %s\n",ptr->name);
		printf("Employee ID : %d\n\n",ptr->id);
		ptr++;
	}
    return 0;
}
