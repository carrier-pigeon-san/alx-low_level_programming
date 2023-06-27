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

	for (c = 0; s[c] != '\n'; c++)
		;

	for (; c >= 0; c--)
		_putchar(s[c]);

	_putchar('\n');
}
