#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	for (c--, i = 0; i <= n; i++, c++)
		s[c] = b;

	return (s);
}
