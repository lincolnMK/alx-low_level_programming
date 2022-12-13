#include "main.h"
/**
  * print_alphabet_x10 - this program print th alphabeit
 */
void print_alphabet_x10(void)
	{
		int k;

		for (k = 0; k <= 9; k++)
		{
			char c;
			for (c = 'a'; c <= 'z'; c++)
				{
					_putchar(c);
				}

			_putchar('\n');
		}
	}
