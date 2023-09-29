#include "main.h"
int _pow(int x, int y);
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: unsigned int/0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	int len, i;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);
	len--;
	for (i = dec = 0; len >= 0; len --, i++)
		if (b[len] == '1')
			dec += _pow(2, i);
	return (dec);
}
/**
 * _pow - returns the value of x raised to power y
 * @x: integer argument
 * @y: exponential
 *
 * Return: exponential product
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y < 1)
		return (1);
	return (x * _pow(x, (y - 1)));
}
