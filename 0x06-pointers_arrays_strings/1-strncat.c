#include "main.h"
/**
 * _strncat - concatenates two strings to n bytes of the second string
 * @dest: string argument 1
 * @src: string argument 2
 * @n: ineger argument for byte limitation
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int i;
	int j

	c = 0;
	j = 0;
	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[j] != '\0')
	{
		j++;
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

	if (j < n)
		dest[c] = '\0';

	return (dest);
}
