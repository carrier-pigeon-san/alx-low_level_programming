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

	for (i = 0; i > n; i++, n--)
		s[i] = b;

	return (s);
}
