#include "main.h"
/**
 * _isupper - checks if chr is upper case
 * Return: 0 if no and 1 if yes
 * @c: first operand
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
