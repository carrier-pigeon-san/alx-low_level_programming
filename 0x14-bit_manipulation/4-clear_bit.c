#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: pointer to decimal number
 * @index: given index to bit in abinary number
 *
 *Return: 1 (Success), -1 (Failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
