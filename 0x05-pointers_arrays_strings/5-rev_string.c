#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string argument
 *
 * Return:Always 0
 */

void rev_string(char *s)
{
	int c;
	int i;
	char w;
	int j;

	c = 0;
	while (s[c] != '\0')
		c++;
	j = c;
	c--;
	i = 0;
	while (i >= j / 2)
	{
		w = s[i];
		s[i] = s[c];
		s[c] = w;
		c--;
		i++;
	}
}
