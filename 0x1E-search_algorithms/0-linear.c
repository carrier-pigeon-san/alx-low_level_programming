#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: status code
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array && value)
	{
		for (index = 0; index < size; index++, *array++)
		{
			printf("Value checked array[%ld] = %d\n", index, *array);
			if (*array == value)
				return (index);
		}
	}
	return (-1);
}
