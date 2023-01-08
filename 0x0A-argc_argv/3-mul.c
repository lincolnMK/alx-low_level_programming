#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of program
 * @argc: count of args
 * @argv: array of them ergs
 * Return: 0 always
 */
int main(int argc, char	*argv[])
{
	if ((argc == 1) || (argc == 2))
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
