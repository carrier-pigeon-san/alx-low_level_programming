#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c;
	char n;

	n = 48;
	while (n < 58)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
