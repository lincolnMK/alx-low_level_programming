#include "main.h"
#include "dog.h"
/**
 * init_dog - initialize structure of dog
 * @d: the structure
 * @name: to be passed to the structure
 * @age: to be passed to the structure
 * @owner: to be passed to the structure
 * struct dog *d - the parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	(*d).name = name;
	d->age = age;
	(*d).owner = owner;
}
