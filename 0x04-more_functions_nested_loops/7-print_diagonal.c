#include "main.h"

/**
 * print_diagonal - it does that
 * @n: number size of line
 * Return: 0 always
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= (n - 1); i++)
		{
			int j;

			for (j = 0; j <= (i - 1); j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

		}
	}

}
