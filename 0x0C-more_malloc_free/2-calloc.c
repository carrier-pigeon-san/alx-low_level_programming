#include "main.h"
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes...
 * ...each and returns a pointer to the allocated memory
 * @nmemb: number of elements
 * @size: size of each element in bytes
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *mem;
	unsigned char *memr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	memr = (unsigned char *)mem;
	for (i = 0; i < nmemb; i++)
		memr[i] = 0;
	return (mem);
}
