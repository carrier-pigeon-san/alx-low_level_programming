#include "main.h"
/**
 * prit_sign - prints the sign of a number
 * @n: number whose sign is to be determined
 *
 * Return: 1 if positive
 * 0 if 0
 * -1 if negative
 */
int print_sign(int n)
{
	int sign;

	if (n < 0)
	{
		sign = -1;
		_putchar('-');
		_putchar(',');
		_putchar(' ');
	}
	else if (n == 0)
	{
		sign = 0;
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		 sign = -1;
		 _putchar('+');
		 _putchar(',');
		 _putchar(' ');
	}

	return (sign);
}
