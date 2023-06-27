#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: String argument
 *
 * Return:Always 0
 */

void puts2(char *str)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		if ((c % 2) == 0)
		{
			_putchar(s[c]);
		}
		c++;
	}
	_putchar('\n');
}
