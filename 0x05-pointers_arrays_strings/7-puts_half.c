#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: String argument
 *
 * Return:Always 0
 */

void puts_half(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}

	if ((l % 2) == 0)
	{
		l = l / 2;
	}
	else
	{
		l = (l + 1) / 2;
	}


	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
