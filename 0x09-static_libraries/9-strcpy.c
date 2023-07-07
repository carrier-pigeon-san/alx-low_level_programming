#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	c = 0;
	while (src[c] != '\0')
	{
		if (c == 0)
			*dest = *src;
		else
			*(dest + c) = *(src + c);
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
