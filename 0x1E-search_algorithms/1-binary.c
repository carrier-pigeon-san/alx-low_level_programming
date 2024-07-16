#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value s located
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid, idx;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (idx = low; idx <= high; idx++)
		{
			if (idx == high)
				printf("%d\n", array[idx]);
			else
				printf("%d, ", array[idx]);
		}
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	if (array[low] == value)
		return (low);
	return (-1);
}
