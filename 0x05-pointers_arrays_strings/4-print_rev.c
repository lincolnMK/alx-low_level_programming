#include "main.h"
#include <stdlib.h>
/**
 * _puts - pusts stiff innit
 * @str: first operanda
 * Return: 0 always
 */

void print_rev(char *s)
{
	int k, len;

	len = 0;

	while (*(s+len) != '\0')
	{

		len++;
	}

	k = 0;

	for (k = len; k >= 0; k-- )
	{
		
		printf("%c", *(s + k));
		
	}
	printf("\n");
}
