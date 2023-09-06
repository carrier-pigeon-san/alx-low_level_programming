#include "main.h"
/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, bal, num;
	int coin = 0;
	int denom[5] = {25, 10, 5, 2, 1};

	if (arg != 2)
	{
		printf("Error\n");
		return (1);
	}

	bal = atoi(argv[1]);

	if (bal < 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		num = bal / denom[i];
		coin += num;
		bal -= num * denom[i];
	}
	printf("%d\n", coin);
	return (0);
}
