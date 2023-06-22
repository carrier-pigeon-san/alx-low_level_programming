#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9, excluding 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
