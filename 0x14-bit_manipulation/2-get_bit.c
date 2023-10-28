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
	return ((n >> index) & 1);
}
