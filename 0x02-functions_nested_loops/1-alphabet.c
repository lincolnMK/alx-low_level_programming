#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 *
 * print_alphabet: this program print th alphabet
 */
void print_alphabet(void)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
