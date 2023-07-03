#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: src memory area
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	unsigned int c;

	for (i = 0, c = 0; c <= n; i++, c++)
		dest[i] = src[c];

	return (dest);
}
