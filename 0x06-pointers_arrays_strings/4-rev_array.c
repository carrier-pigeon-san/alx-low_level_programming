#include "main.h"
/**
 * reverse_array - reverses content of an array of integers
 * @a: integer argument for array
 * @n: number of array elements
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int b;
	int f;
	int d;

	n--;
	d = n / 2;
	b = 0;
	while (b < d)
	{
		f = a[b];
		a[b] = a[n];
		a[n] = f;
		n--;
		b++;
	}
}
