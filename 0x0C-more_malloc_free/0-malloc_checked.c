#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return;
}
