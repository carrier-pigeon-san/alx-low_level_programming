#include "main.h"
/**
 * get_endianness - checks endianness
 *
 * Return: 0 (big endian), 1 (little endian)
 */
int get_endianness(void)
{
	int testNum = 1;
	unsigned char *byteNum;

	byteNum = (unsigned char *)&testNum;

	if (byteNum[0] == 1)
		return (1);
	else
		return (0);
}
