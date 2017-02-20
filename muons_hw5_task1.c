/*
 * =====================================================================================
 *
 *       Filename:  muons_hw5_task1.c
 *       	Usage:  ./muons_hw5_task1.c
 *    Description:  homework task 1
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:37:40 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Braxton Greenwell (), braxtongreenwell@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */

/* Main Program */
int main(void)
{
	float r1, r2;
	float i;
	printf("Enter the value for outer radius(r2): ");
	scanf("%f", &r2);
	printf("Enter the value for inner radius(r1): ");
	scanf("%f", &r1);

	i = 3.14159/4 * ((r2*r2*r2*r2) - (r1*r1*r1*r1));
	printf("The second moment of inertia is %.2f\n", i);
	return 0;
}


/* Function Defenitions */


