#include "main.h"
/**
 * swap_int - swaps em like
 * @a: first operand
 * @b: second operand
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int *tmp;

	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
