#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int c, i, j, n;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	n = i + j + 1;
	str = malloc(sizeof(char) * n);

	if (str == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		str[c] = s1[c];
	for (c = 0; s2[c] != '\0'; c++, i++)
	{
		if (c == 0)
			*(str + i) = *s2;
		else
			*(str + i) = *(s2 + c);
	}

	str[i] =  '\0';
	return (str);
}
