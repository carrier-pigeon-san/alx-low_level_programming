#include "main.h"
/**
 * _abs - computes the absolute vale of an integer
 * @int: number whose absolute value is to be determined
 *
 * Return: Always 0 (Success)
 */
int _abs(int);
int _abs(int n)
{

	if (n < 0 )
	{
		n *= -1;
		_putchar(n + '0');
	}
	else
	{
		_putchar(n);
	}

	return (0);
}
