#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers;
 * @a: integer argument of array
 * @n: integer argument of array length
 *
 * Return:Always 0
 */

void print_array(int *a, int n)
{
	int c;

	c = 0;
	n -= 1;
	while (c <= n)
	{
		printf("%d", a[c]);
		if (c != n)
			printf(", ");
		c++;
	}
	printf("\n");
}
