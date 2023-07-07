#include "main.h"
/**
 * _isalpha - checks if given character is an alphabetic character
 * @c: The input parameter
 *
 * Return: 1 if character is an alphabet
 * 0 if otherwise
 */
int _isalpha(int c)
{
	int n;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		n = 1;
	else
		n = 0;

	return (n);
}
