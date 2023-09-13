#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: function poiter to functions that compare values
 * Return: index of first element for which the cmp function does not return 0
 * ...If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) == 1)
				return (i);
		return (-1);
	}
	return (0);
}
