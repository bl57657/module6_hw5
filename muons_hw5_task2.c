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
	float convM;
	int inc, Startmile, Endmile;
	printf("Enter start point: \n");
	scanf("%d", &Startmile);
	printf("Enter end point: \n");
	scanf("%d", &Endmile);
	printf("Enter increments: \n");
	scanf("%d", &inc); 

	printf("Miles = Kilometers\n");
		for (int j = Startmile; j <= Endmile; j++)
		{
			Startmile =+ 1;
			convM = MtoK(Startmile);
			printf("%3.1d   %10.2f\n", Startmile, convM);
		}

	return 0;
}

/* Function Defenitions */
float MtoK(float m)
{
	float k;
	k = m * 1.61;
	return k;
}


