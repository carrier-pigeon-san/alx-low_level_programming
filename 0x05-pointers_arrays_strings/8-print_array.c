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
	c = 0;

	while (c <= n)
	{
		printf("%d, ", *(a + n));
		n++;
	}
}