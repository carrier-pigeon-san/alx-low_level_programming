#include "main.h"
int prep_sqrt(int n, int v);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number in question
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	int v = 2;

	if (n == 1)
	{
		return (1);
	}
	return (prep_sqrt(n, v));
}

/**
 * prep_sqrt - checks all numbers up to half of said number are its root
 * @n: number in question
 * @v: divisor check subjected to n
 *
 * Return: natural square root of a number
 * -1 if number has no natural square root
 */
int prep_sqrt(int n, int v)
{
	if (v > n / 2)
		return (-1);
	if (n % v == 0 && n / v == v)
		return (v);
	return (prep_sqrt(n, v + 1));
}
