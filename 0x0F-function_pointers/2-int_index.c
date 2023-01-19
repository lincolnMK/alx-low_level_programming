#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - search for int
 * @size: the number of elements in the array
 * @cmp: is a pointer to the functions to be used to compare values
 * @array: input arrays for the search
 * Return: value specified
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
			return (i);
	}
	return (-1);
}
