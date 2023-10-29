#include "main.h"
/**
 * set_bit - sets value of bit to 1 at given index
 * @n: pointer to decimal number
 * @index: given index of bit
 *
 * Return: 1 (Success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
