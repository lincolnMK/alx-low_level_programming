#include "main.h"

/**
 * change - fucntion to calculate change
 * @cents: the money passed to be changed.
 * Return:  num the change found/ calculated
 */
int change(int cents)
{
/*accept validated cents and calculate and return value*/
int num;
num = 0;

while (cents != 0)
{
	if (cents % 10 == 9 || cents % 10 == 7)
		cents = cents - 2;
	else if (cents % 25 == 0)
		cents = cents - 25;
	else if (cents % 10 == 0)
		cents = cents - 10;
	else if (cents % 5 == 0)
		cents = cents - 5;
	else if (cents % 2 == 0)
	{
		if (cents % 10 == 6)
			cents = cents - 1;
		else
			cents = cents - 2;
	}
	else
		cents = cents - 1;
	num++;
}
return (num);

}

/**
 * main - main program for the change
 * @argc: number of paramenters
 * @argv: them parameters array
 * Return: always zise
 */
int main(int argc, char *argv[])
{
	int coins;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	coins = change(atoi(argv[1]));
	printf("%d\n", coins);
	return (0);
}

