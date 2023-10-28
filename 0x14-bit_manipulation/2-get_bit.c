#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n: given decimal number
 * @index: index of bits beginning from 0
 *
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitsLen = 0;
	int tempBin = n;

	while (tempBin != 0)
		bitsLen++;

	if (index >= bitsLen)
		return (-1);
	return ((n >> index) & 1);
}
