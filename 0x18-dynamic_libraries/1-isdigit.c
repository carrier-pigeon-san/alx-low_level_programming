#include "main.h"
/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: parameter to be checked
 *
 * Return: 1 if digit
 * 0 if otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
