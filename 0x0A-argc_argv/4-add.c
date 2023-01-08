#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of program
 * @argc: count of args
 * @argv: array of them ergs
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int j, num = 0, x = 0;

	for (j = 0; j < argc ; j++)
	{
		if (atoi(argv[j]))
		{
			num++;
		}
	}
	if ((num > 0) && (num < (argc - 1)))
	{
		printf("Error\n");
		x = 1;
	}
	if (((argc - 1) != 0) && (num == (argc - 1)))
	{
		int i, sum = 0;

		for (i = 0; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	if ((num == 0))
	{
		printf("0\n");
	}
	return (x);
}
