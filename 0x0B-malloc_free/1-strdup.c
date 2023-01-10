#include "main.h"
/**
 * _strdup - returns same string on new memory space
 * @char: pointer of the input string
 * Return:  some string
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i, len; 

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	str2 = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	while ((str2[i] = str[i]) != '\0')
	{
		i++;
	}

	return (str2);

}
