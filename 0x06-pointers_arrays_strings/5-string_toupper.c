#include "main.h"
/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @c: string argument
 *
 * Return: c
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;
		i++;
	}
	return (c);
}
