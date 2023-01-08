#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of program
 * @argc: count of args
 * @argv: array of them ergs
 * return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
	return (0);
}
