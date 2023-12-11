#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string argument
 * @accept: target bytes
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, c, n;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == ' ')
			break;
	for (c = 0; c <= i; c++)
		for (j = 0; accept[j] != '\0' ; j++)
			if (s[c] == accept[j])
				n += 1;
	return (n);
}
