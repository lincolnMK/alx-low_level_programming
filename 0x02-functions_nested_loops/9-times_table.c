#include "main.h"
/**
 * times_table - muliple to 9
 *
 * Return: always 0 bt thid time table
 *
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int x;

			x = i * j;
			_putchar("x");

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				continue;
		}
		_putchar('\n');
	}
}
