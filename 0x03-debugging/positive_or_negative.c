#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - entry level
 *   *
 *    * Return: Always 0 (_success)
 *     *
 *      * this program will decide negative or positive
 *       */
void positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
}
