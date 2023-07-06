#include "main.h"
int modulus(int n, int v);
/**
 * is_prime_number - determines whether or not an integer is a prime number
 * @n: integer parameter
 *
 * Return: 1 if integer is a prime number
 * 0 if integer is not a prime number
 */
int is_prime_number(int n)
{
	int v = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (modulus(n, v));
}
/**
 * modulus - tests whether a number is wholly divisible by all numbers less
 * than its half
 * @n: dividend
 * @v: divisor
 *
 * Return: 1 if dividend is unevenly divisible by all numbers below its half
 * 0 if dividend is not evenly divisible by all numbers less than its half
 */

int modulus(int  n, int v)
{
	if (v == n / 2)
		return (1);
	if (n % v == 0)
		return (0);
	return (modulus(n, v + 1));
}
