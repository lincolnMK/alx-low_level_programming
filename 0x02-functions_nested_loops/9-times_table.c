#include "main.h"
/**
 * times_table - muliple to 9
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
				}
				_putchar((x % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					continue;
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					continue;
			}
		}
			_putchar('\n');
		}
	}
