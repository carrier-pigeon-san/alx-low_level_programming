#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which...
 * ... contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	int i, c;
	char *cps;

	if (str == NULL)
		return (NULL);

	for (i = 0, str[i] != '\0'; i++)
		;

	i++;
	cps = malloc(sizeof(char) * i);

	if (cps == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		cps[c] = str[c];

	cps[i] = '\0';
	return (cps);
}
