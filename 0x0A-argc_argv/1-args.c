#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
		printf("%d\n", 0);
	return (0);
}
