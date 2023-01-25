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
	if (b == 0)
	exit(98);

	return (malloc(b));
}
