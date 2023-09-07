#include "main.h"
/**
 * string_nconcat - concatenates string 1 with the first n bytes of string 2
 * @s1: string one
 * @s2: string two
 * @n: first n number of bytes of string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int b, c, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		n = j;

	b = i + n + 1;
	str = malloc(sizeof(char) * b);

	if (str == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		str[c] = s1[c];
	for (c = 0; c < n; c++, i++)
	{
		if (c == 0)
			*(str + i) = *s2;
		else
			*(str + i) = *(s2 + c);
	}

	str[i] =  '\0';
	return (str);
}
