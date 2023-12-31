#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of optional parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list first;
	size_t i;
	int sum;

	if (n == 0)
		return (0);

	va_start(first, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(first, int);

	va_end(first);
	return (sum);
}
