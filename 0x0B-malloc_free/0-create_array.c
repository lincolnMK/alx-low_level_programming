#include "main.h"
/**
 * create_array - creates array based on given size and innitia char
 * @size: size of the array
 * @c: innitial char in the m arrays
 * Return: alway zero i gues
 */
char *create_array(unsigned int size, char c);
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			array[size] = c;
		}
		return (array);
	}
}
