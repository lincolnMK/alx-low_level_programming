#include "main.h"
/**
 *_assess - improvised fucntioin
 *Return: the square roo of the given number
 *@n: the number that needs the root of the saure
 *@i: another operando
 */

	int _assess(int i, int n)
	{
		if ((n == 0) || (n == 1))
		{
			return (n);
		}

		else if ((i * i) == n)
		{
			return (i);
		}
		else if (i * i < n)
		{
			return (_assess(i + 1, n));
		}
		return (-1);
		return (-1);
	}

/**
 * _sqrt_recursion - the actual function
 * Return: the square
 * @n: the operand
*/
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
	{
		return (-1);
	}
	else
	{
		return (_assess(i, n));
	}
}

