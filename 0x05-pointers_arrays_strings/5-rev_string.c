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

	c = 0;
	while (s[c] != '\0')
		c++;
	c--;
	i = 0;
	while (c >= 0)
	{
		w = s[c];
		s[c] = s[i];
		s[i] = w;
		
	}
}
