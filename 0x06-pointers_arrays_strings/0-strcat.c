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
	}
	k = 0;
	
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

