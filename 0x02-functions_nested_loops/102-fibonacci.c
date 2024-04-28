#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2...
 * ...followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int first, second, third, count;

	for (count = 0, first = 1, second = 2; count < 50; count++)
	{
		if (count == 0)
			printf("%ld, ", first);
		else if (count == 1)
			printf("%ld, ", second);
		else
		{
			third = first + second;
			first = second;
			second = third;
			printf("%ld", third);
			if (count < 49)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
