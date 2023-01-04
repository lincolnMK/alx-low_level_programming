#include "main.h"
/**
 * _print_rev_recursion - will print recursively
 * return: 0 always
 * @s: operand
 */
void _print_rev_recursion(cha *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
