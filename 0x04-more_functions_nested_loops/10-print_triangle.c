#include "main.h"

/**
 * print_triangle - does jusy that
 * @size: size of triangle
 * return: 0
 */
void print_triangle(int size)
{
	int i;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			int j;

			for (j = 1; j <= size; j++)
			{
				if (j >= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
