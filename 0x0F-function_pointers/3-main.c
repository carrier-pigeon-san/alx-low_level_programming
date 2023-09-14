#include "3-calc.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int (*fun_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '%' || *argv[2] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	fun_op = get_op_func(argv[2]);
	printf("%d\n", fun_op(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
