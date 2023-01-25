#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - will allocate space to mem
 * @b: input the size of the memory
 * Return: pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	if (b == 0)
		exit(98);
	ptr = (int *) malloc(b);

	if (!ptr)
		exit(98);

	else
		return (ptr);

}
