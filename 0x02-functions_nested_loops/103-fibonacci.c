#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms of the fibonacci...
 * ...sequence below 4,000,000
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int first, second, third, sum;

	for (first = 1, second = 1, third = 0, sum = 0; third < 4000000;)
	{
		third = first + second;
		first = second;
		second = third;
		if ((third % 2) == 0)
			sum += third;
	}
	printf("%ld\n", sum);
	return (0);
}
