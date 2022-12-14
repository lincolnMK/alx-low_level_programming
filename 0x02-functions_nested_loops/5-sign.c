#include"main.h"
#include<stdio.h>
#include<ctype.h>
/**
 * print_sign -prints signs 
 * 
 * Return: Always 0 (success)
 * @n: first input value int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
