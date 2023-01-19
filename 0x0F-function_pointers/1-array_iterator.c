#include "function_pointers.h"
/**
 * array_iterator - iterates thru any array type
 * @array: the array
 * @size: size of the thing
 * @action: the pointer to the function to use  while iterating
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
