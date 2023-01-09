#include "main.h"

/**
 * _strcat - concatnates
 * @dest: final
 * @src: starto
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (k = 0; src[k] != '\0'; k++)
		{
			dest[i] = src[k];
			i++;
			k++;
		}

	}
	dest[i] = '\0';
	return (dest);
}

