#include <stdio.h>

/**
 * main - Entry leve
 *
 * Return: Always 0 (success)
 *
 * this program prints numbers plus new line
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x !=9 )
		{
			putchar(',');
			putchar(' ');
		}
		else 
			continue;
	}
	putchar('\n');
	return (0);
}
