#include "main.h"

/**
 * print_most_numbers - prints it
 * Return: 0 always
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
