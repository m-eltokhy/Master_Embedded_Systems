/*
 * main.c
 *
 *  Created on: Oct 12, 2022
 *      Author: M.Eltokhy
 */
#include <stdio.h>

struct Sdistance{
	int feet;
	float inch;
};

int main()
{
	struct Sdistance d1,d2,sum;
    printf("Enter First distance :\n");
    printf("Enter Feet : ");
    fflush(stdout);fflush(stdin);
    scanf(" %d",&d1.feet);
    printf("Enter Inch : ");
    fflush(stdout);fflush(stdin);
    scanf("%f",&d1.inch);
    printf("Enter Second distance :\n");
    printf("Enter Feet : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&d2.feet);
    printf("Enter Inch : ");
    fflush(stdout);fflush(stdin);
    scanf("%f",&d2.inch);
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>=12.0){
    	sum.feet++;
    	sum.inch-=12.0;
    }
    printf("Sum of distances = %d Feet and %.1f Inch\n",sum.feet,sum.inch);
    return 0;
}
