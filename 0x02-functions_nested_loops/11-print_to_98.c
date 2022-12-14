#include <stdlib.h>
/*
 * print_to_98 - as is
 * Return: to return 0
 * @n: operanda
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else 
				continue;
		}
	}
	else 
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
