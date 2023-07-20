#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string input parameter
 * @f: prints name in uppercase or as is
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	int i;
	if (f == NULL)
		i = 0;
		while (name[i])
		{
			if (name[i] >= 'a' && name[i] <= 'z')
			{
				putchar(name[i]);
			}
			i++;
		}
	f(name);
}
