#include "main.h"
#include<string.h>
/**
 * _strlen - finds lenth of string
 * @s: of pointer
 * Return: 0 always
 */
int _strlen(char *s)
{
	int k;

	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}
