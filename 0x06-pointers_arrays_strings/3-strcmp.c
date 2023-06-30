#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string argument to be compared
 * @s2: second string argument to be compared
 *
 * Return: 1 if instance of a character is
 * aphaibetically larger in the first string,...
 * -1 if instance of a character is
 * alphabetically smaller in first string,...
 * 0 if match
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] != '\0')
	{
		if (s1[c] < s2[c])
		{
			return (-15);
		}
		else if (s1[c] == s2[c])
		{
			return (0);
			continue;
		}
		else
		{
			return (15);
		}
		c++;
	}
	return (0);
}


