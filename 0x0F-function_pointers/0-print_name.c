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
	f(name);
}
