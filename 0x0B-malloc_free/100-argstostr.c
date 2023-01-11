#include "main.h"
/**
 * argstostr - the main dude
 * @ac: the number of args
 * @av: them args
 * Return: char conncacted
 */
char *argstostr(int ac, char **av)
{
	int i, k, j;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	array = (char *)malloc(sizeof(char *) * ac);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0' j++)
			len++;
		len++;
	}

	array = malloc(sizeof(char) * (len + 1));
	if (array == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			array[k] = av[i][j];
			k++;
		}
		array[k] = '\0';
		k++;
	}
	return (array);
}
