#include "main.h"

/**
 * _assess - recursive loopings
 * @num : number
 * @i : iteratring number
 * Return: 1  or 0
 */

int _assess(int num, int i)
{
	if (i == (num - 1))
	{
		return (1);
	}
	else if ((num % i) == 0)
	{
		return (0);
	}
	if ((num % i) != 0)
	{
		return (_assess(num, i + 1));
	}
	return (0);
}

/**
 *is_prime_number - finds prime numbers
 *return: primers numbers
 *@n: first operando
 *Return: usually 0
*/
int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (_assess(n, i));

}
