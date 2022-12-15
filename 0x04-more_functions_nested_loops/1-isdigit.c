include "main.h"

/**
 * _isdigit - check if num is digit
 * @c: only value iput
 * Return: 1 if yes and 0 if no
 */
int _isdiigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
