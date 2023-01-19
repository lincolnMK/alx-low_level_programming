#include "3-calc.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * main -do operations
 * Return: 0
 * @argv: arguments passed
 * @argc: number of arguments
 */
int main (int argc, char *argv[])
{
	int a, b, ans;

	int (*solve)(int, int);

	char *get_op;

	if (argc != 4)
		printf("Error\n");
		exit(98);
	
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
		printf("Error\n");
		exit(99);
	if ((*get_op == '/' || *get_op == ''%') && (*argv[3] == '0'))
		printf("Error\n");
		exit(100);

	solve = get_op_func(get_op);
	ans = solve(a, b);

	printf("%d\n", ans);
	return (0);
}
