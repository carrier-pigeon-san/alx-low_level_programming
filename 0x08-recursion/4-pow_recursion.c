#include "main.h"
/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: input integer argument
 * @y: input integer argument (power)
 *
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
