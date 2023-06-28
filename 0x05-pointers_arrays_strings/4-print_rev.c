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
		c++;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
