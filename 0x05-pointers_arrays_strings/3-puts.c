#include "main.h"
/**
 * _puts - pusts stiff innit
 * @str: first operanda
 * Return: 0 always
 */

void _puts(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		printf("%s", (str + 1));
		k++;
	}
	printf("\n");
}
