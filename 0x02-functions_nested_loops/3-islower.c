#include"main.h"
#include<stdio.h>
/**
 * _islower -prints if case is lower or upper
 *
 * Return: Always 0 (success)
 */
int _islower (int c)
{
	if (islower(c))
	{
		return (1);
	}
	else if (!islower(c))
	{
		return (0);
	}
}
