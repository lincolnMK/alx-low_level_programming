#include "main.h"
/**
 * factorial - will do factorial of given numbers'
 * Return: will return the int of the factorial
 * @n: operando
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
