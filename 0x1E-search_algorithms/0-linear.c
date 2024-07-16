#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using a the
 * Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: value to search for
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array)
	{
		for (idx = 0; idx < size; idx++)
		{
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
			if (array[idx] == value)
			{
				return (idx);
			}
		}
	}
	return (-1);
}
