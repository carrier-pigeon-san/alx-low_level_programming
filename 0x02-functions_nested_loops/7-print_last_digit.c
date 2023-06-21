#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @int: given number
 *
 * Return: value of the last digit of the number
 */
int print_last_digit(int);
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * -1;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
}
