#include"main.h"
#include<stdio.h>
#include<ctype.h>
/**
 * _islower -prints if case is lower or upper
 *
 * Return: Always 0 (success)
 * @c: first input value int
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
