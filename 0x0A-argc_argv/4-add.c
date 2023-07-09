#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	i = 1;
	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	while (i < argc)
	{
		char *num = argv[i];

		j = 0;
		while (num[j] != '\0')
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(num);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
