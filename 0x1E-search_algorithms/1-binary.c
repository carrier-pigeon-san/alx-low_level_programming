#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: status code
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, idx;
	int middle;

	if (!array || !value)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			if (idx < right)
				printf("%ld, ", idx);
			else
				printf("%ld\n", idx);
		}
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
