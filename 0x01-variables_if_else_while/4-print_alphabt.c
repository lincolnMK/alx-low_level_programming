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
		if (x == 'e')
		{
			x++;
		}
		else if (x == 'q')
		{
			x++;
		}
		else 
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
