#include "main.h"
/**
 * reverse_array - does the rev
 * @a: array
 * @n: number of elements in the array
 * Return: zero always
 */
void reverse_array(int *a, int n)
{
	int j;
	int k;

	for (j = 0; j < n--; j++)
	{
		k = a[j];
		a[j] = a[n];
		a[n] = k;

	}
}
