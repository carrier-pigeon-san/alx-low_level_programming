#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to function to be used to compare values
 * Return: index of first element for which cmp function does not return 0
 * -1 if no element matches or size <= 0
 */
int int_index(int *array, size_t size, int (*cmp)(int))
{
	unsigned int i;

	i = 0;
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
