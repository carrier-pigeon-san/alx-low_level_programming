#include "main.h"
/**
 * create_array - creates array of chars, initializes it with a specific char
 * @size: length of the array
 * @c: character to be initialized with
 *
 * Return: NULL if size = 0
 * pointer to the array or NuLL if it fails
 */
char *create_array(unsigned int size, char c)
{
	int *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		c++;
	}

	return (arr);
}
