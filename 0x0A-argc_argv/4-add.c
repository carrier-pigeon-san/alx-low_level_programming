#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;
	int c = 1;
	int sum = 0;

	if (argc > 1)
	{
		while (c < argc)
		{
			char *bitt = argv[c];

			i = 0;
			while (bitt[i] != '\0')
			{
				if (!isdigit(bitt[i]))
				{
					printf("Error\n");
					return (1);
				}
				i++;
			}
			sum += atoi(argv[c]);
			c++;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
