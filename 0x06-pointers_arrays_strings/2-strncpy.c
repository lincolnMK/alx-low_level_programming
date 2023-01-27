#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: where to copy to
 * @src: from where to copy
 * @n: input value
 * Return: zero as usual
 */
cha *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
