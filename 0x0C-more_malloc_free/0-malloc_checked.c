#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	b = malloc(b);
	if (b == NULL)
		exit(98);
}
