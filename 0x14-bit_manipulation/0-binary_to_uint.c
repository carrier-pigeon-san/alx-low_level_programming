#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int decimal = 0;
	int charIndex;
	int exponent = 1;

	if (b == NULL)
		return (0);

	for (charIndex = 0; b[charIndex] != '\0'; charIndex++)
		if (b[charIndex] != '1' && b[charIndex] != '0')
			return (0);
	for (charIndex--; charIndex >= 0; charIndex--)
	{
		if (b[charIndex] == '1')
			decimal += exponent;
		else
			decimal += 0;
		exponent *= 2;
	}

	return (decimal);
}
