#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees mem allocated to dog if any
 * @d: the space to be freeed
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
	else 
		return;
}
