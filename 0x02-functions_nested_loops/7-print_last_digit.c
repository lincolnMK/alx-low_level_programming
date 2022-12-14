#include "main.h"
#include <stdlib.h>
/**
 i* print_last_digit - prints absolute value
 * @n : first operancd
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int ld;
	ld = abs(n % 10);
	
	_putchar((ld % 10) + '0');

	return (ld);
}
