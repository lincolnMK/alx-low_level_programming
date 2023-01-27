#include "main.h"
/**
 * _strcmp -compare string values given
 * @s1: firs operando
 * @s2: second operando
 * Return: test result
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] = '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
