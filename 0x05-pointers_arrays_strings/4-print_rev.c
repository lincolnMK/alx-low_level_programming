#include "main.h"
#include <stdlib.h>
/**
 * print_rev - pusts stiff innit
 * @s: first operanda
 * Return: 0 always
 */

void print_rev(char *s)
{
	int k, len;

	len = 0;

	while (*(s + len) != '\0')
	{

		len++;
	}

	k = 0;

	for (k = len - 1; k >= 0; k--)
	{
		printf("%c", *(s + k));

	}
	printf("\n");
}
