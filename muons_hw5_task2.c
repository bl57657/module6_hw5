/*
 * =====================================================================================
 *
 *       Filename:  muons_hw5_task2.c
 *       	Usage:  ./muons_hw5_task2.c
 *    Description: task 2 Kilometer conversion
 *
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:37:40 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Breckin Lassen (), breckinlassen@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* For exit */

/* Function Prototypes */
float MtoK(float m);

/* Main Program */
int main(void)
{
	float k;
	int  StartMile, EndMile, inc;

	printf("Enter the starting miles: ");
	scanf("%d", &StartMile);
	printf("Enter the ending miles: ");
	scanf("%d", &EndMile);
	printf("Enter the desired increments: ");
	scanf("%d", &inc);

	printf("Miles  =  Kilometers\n");
	for (int i= StartMile; i <= EndMile; i+= inc)
	{
		k = i * 1.61;
		printf("%3.1d %10.2f\n", i, k);

	}
	return 0;
}

/* Function Defenitions */
