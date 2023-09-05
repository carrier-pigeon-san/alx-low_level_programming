#include "main.h"
/**
 * create_array - creates an array of chars and...
 * ...initializes it with a specific char
 * @size: size of array
 * @c: character array is to be initialized with
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(unsigned int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
