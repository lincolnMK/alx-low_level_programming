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
			_putchar((i * j));

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
