#include "main.h"
/*
 * jack_bauer - prints the hours
 *
 * Return : will return void
 *
 * Description: this one does ad
 *
 * jack_bauer: resposnds with time
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i <= 23; i++)
	{
		int j;

		for (j = 0; j <= 59; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
