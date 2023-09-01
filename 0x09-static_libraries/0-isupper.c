#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: charcater to be checked
 *
 * Return: 1 if uppercase
 * 0 if otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
