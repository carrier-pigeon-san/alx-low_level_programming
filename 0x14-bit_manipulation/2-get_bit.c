#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long integer
 * @index: index
 *
 * Return: value of the bit at index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t bitlen = 0;
	int temp;

	temp = n;
	while (temp != 0)
	{
		temp >>= 1;
		bitlen++;
	}
	if (index >= bitlen)
		return (-1);
	n = n >> index;

	return (n & 1);
}
