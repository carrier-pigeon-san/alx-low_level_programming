#include "main.h"
int p_square(int i, int v);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer argument
 * Return: square root
 */
it _sqrt_recursion(int n)
{
	int v = 2;

	if (n == 1)
	{
		return (1);
	}
	return (p_square(n, v));
}

/**
 * p_square - helper function to determine if n is a perfect square
 * @i: integer argument
 * @v: divisor
 * Return: sqrt
 */
int p_square(int i, int v)
{
	if (v > i / 2)
		return (-1);
	if (i % v == 0 && i / v == v)
		return (v);
	return (p_square(i, v + 1));
}
