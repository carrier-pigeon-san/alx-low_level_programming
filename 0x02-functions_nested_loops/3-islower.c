#include "main.h"
/**
 * _islower - checks if given character is lowercase
 * @c: The input parameter
 *
 * Return: 1 if character is lowercase
 * 0 if otherwise
 */
int _islower(int c)
{
	int n;

	if (c >= 97 && c <= 122)
		n = 1;
	else
		n = 0;

	return (n);
}
