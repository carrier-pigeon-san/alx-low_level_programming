#include "main.h"
/**
 * flip_bits - returns required number of bits to be flipped to...
 * ...get from one number to another
 * @n: given decimal number 1
 * @m: given decimal number 2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
{
	unsigned int index, notSaime;

	for (index = 0, notSame = 0; index < sizeof(n) * 8; index++)
		if (((n >> index) & 1) != ((m >> index) & 1))
			notSame++;
	return (notSame);
}
