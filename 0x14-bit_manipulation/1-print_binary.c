#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bitlen = 0;
	int temp;

	if (n == 0)
		_putchar('0');

	temp = n;
	while (temp != 0)
	{
		temp >>= 1;
		bitlen++;
	}
	for (bitlen--; bitlen >= 0; bitlen--)
		_putchar(((n >> bitlen) & 1) + '0');
}
