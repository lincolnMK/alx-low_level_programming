#include <stdlib.h>
#include "main.h"
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
			 if ( i> 9)
                                {
			_putchar((abs(i) / 10) + '0');
				}
			_putchar((abs(i) % 10) + '0');
		 while (i==98)
                       {continue;
                       }
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{  if ( i> 9)
                                {
			_putchar((i / 10) + '0');
				}

			_putchar((i % 10) + '0');
 while (i==98)
                       {continue;
                       }	
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else 
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
}
