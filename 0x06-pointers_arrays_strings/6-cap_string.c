#include "main.h"
/**
 * cap_string - capitalizes first letter of each word after specific characters
 * @str: string argument
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int c, n, s;
	char sym[] = ",;.!?(){}\n\t\" ";

	c = 0;
	n = c - 1;
	while (str[c] != '\0')
	{
		if (str[c] > 96 && str[c] < 123)
		{
			if (c == 0)
			{
				*str -= 32;
			}
			else
			{
				s = 0;
				while (sym[s] != '\0')
				{
					if (sym[s] == str[n])
					{
						str[c] -= 32;
					}
					s++;
				}
			}
		}
		c++;
		n++;
	}
	return (str);
}
