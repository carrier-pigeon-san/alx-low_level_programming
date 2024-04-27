#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a new line
 * @n: starting number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 99; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
		return;
	}
	for (; n <= 97; n++)
	{
		printf("%d, ", n);
	}
	printf("%d\n", n);
}
