#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string argument
 *
 * Return:Always 0
 */

void rev_string(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
		c++;
	c--;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
