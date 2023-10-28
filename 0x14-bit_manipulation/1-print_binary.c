#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: given unsigned int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bitsLen = 0;
	int tempNum = n;

	if (n == 0)
		_putchar('0');

	while (tempNum > 0)
	{
		tempNum >>= 1;
		bitsLen++;
	}
	for (bitsLen--; bitsLen >= 0; bitsLen--)
		_putchar(((n >> bitsLen) & 1) + '0');
}
