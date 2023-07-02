#include "main.h"
/**
 * leet - encodes  string in leet
 * @str: string argument
 *
 * Return: str
 */

char *leet(char *str)
{
	int i, j;
	char l[] = "aeotl";
	char u[] = "AEOTL";
	char n[] = "43071";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (l[j] != '\0' && u[j] != '\0')
		{
			if (str[i] == l[j] && str[i] == u[j])
				str[i] = n[j];
			j++;
		}
		i++;
	}
	return (str);
}
