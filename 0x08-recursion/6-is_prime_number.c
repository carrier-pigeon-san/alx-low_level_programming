i#include "main.h"
int optimus(int i, int v);
/**
 * is_prime_number - determinew if an integer is a prime number
 * @n: integer argument
 * Return: 1(yes), 0(no)
 */
int is_prime_number(int n)
{
	int v = 2;

	if (n <= 1)
		return (0);
	return (optimus(n, v));
}

/**
 * optimus - helper function to determin if integer is prime number
 * @i: integer argument
 * @v: divisor
 * Return: 1(yes), 0(no)
 */
int optimus(int i, int v)
{
	if (v == i / 2)
		return (1);
	if (i % v == 0)
		return (0);
	return (optimus(i, v + 1));
}
