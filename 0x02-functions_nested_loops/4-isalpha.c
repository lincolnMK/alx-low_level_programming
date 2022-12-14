#include"main.h"
#include<stdio.h>
#include<ctype.h>
/**
 * _isalpha - prints if case is lower or upper
 *
 * Return: Always 0 (success)
 * @c: first input value int
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
