#include <stdio.h>

/**
 * main - Entry leve
 *
 * Return: Always 0 (success)
 *
 * this program prints alphabet plus new line
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
