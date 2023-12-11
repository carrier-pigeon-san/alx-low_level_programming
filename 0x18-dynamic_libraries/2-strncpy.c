#include "main.h"
/**
 * _strncpy - copies a string to n bytes of source
 * @dest: destination
 * @src: source
 * @n: integer argument for byte limit
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}

	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
