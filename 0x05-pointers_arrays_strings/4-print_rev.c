#include "main.h"
/**
 * print_rev - prints string in reverse followed by a new line
 * _strlen - find length of string argument in _puts function
 * @s: string argument
 *
 * Return:Always 0
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int c;

	c = _strlen(s);
	do {
		_putchar(s[c]);
		c--;

	} while (c >= 0);
	_putchar('\n');
}
