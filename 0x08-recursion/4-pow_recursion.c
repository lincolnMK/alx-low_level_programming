#include "main.h"
/**
 * _pow_recursion -find pwer
 * Return: resurl of power
 * @x: mem block having the number for the powering
 * @y: the index for the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
