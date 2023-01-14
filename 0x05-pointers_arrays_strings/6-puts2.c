#include "main.h"
/**
 * puts2 - puts charecters of a string
 * @str: firs operando
 * Return: void
 */
void puts2(char *str)
{
	int l, l2, n;

	char *y = str;

	l = 0;

	l2 = 0;

	while (*y != '\0')
	{
		y++;
		l++;
	}

	l2 = l - 1;

	for (n = 0; n <= l2; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
