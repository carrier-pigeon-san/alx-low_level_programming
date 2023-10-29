#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: given unsigned int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bitsLen = sizeof(n) * 8;
	int bitVal = 0;

	if (n == 0)
		_putchar('0');

	for (bitsLen--; bitsLen >= 0; bitsLen--)
	{
		if ((n >> bitsLen) & 1)
			bitVal = 1;
		if (bitVal)
			_putchar(((n >> bitsLen) & 1) + '0');
	}
}
