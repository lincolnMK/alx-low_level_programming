#include "main.h"
/**
 * _puts_recursion - will du recursive
 * return: 0 always
 * @s: operand
 */
void _puts_recursion(char *s)
{
	if (*s == \'0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recusrion(s + 1);
}
