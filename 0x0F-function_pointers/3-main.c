#include "3-calc.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * main -do operations
 * Return: 0
 * @argv: arguments passed
 * @argc: number of arguments
 */
int main(int argc, char *argv[])
{
	int result;
	int (*calculator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	calculator = get_op_func(argv[2]);

	if (calculator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = calculator(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
