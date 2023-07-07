#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string length to be determined
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
