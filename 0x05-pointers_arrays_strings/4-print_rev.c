#include "main.h"
/**
 * print_rev - prints string in reverse followed by a new line
 * @s: string argument
 *
 * Return:Always 0
 */

void print_rev(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	do {
		_putchar(s[c]);
		c--;

	} while (c >= 0);
}
