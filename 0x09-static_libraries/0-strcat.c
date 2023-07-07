#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string argument 1
 * @src: string argument 2
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int c;
	int i;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		if (i == 0)
		{
			*(dest + c) = *src;
		}
		else
		{
			*(dest + c) = *(src + i);
		}
		i++;
		c++;
	}
	dest[c] = '\0';

	return (dest);
}
