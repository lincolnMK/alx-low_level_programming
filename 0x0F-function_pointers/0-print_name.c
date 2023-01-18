#include "function_pointers.h"
/**
 * print_name - prints name.
 * @name: the name to be printed
 * @f: the function to be handling the actual printing type
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	int len;
	int i;
	char *dzina;

	if (name[0] == '\0')
		return;

	len = 0;

	while (name[len] != 0)
	{
		len++;
	}
	if ((len - 1) != 0)
	{
		dzina = malloc((len - 1) * sizeof(char *));

		for (i = 0; i <= (len - 1); i++)
		{
		dzina[i] = name[i];
		}

		f(dzina);

		free(dzina);
	}
	else
		return;
}
