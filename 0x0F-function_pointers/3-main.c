#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs mathematical operations on two given integers
 * @argc: argument count
 * @argv: math expression
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] == '%' || argv[2] == '/' && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	int (*fun_op)(int, int);

	fun_op = get_op_func(argv[2]);
	printf("%d\n", fun_op(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
