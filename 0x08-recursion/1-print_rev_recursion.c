#include "main.h"
/**
 * _print_rev_recursion - recursive function prints a string in reverse
 * @s: string argument
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
