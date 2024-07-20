#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the value to search for
 * @value: value to search for
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	if (array)
	{
		int btwn = sqrt(size);
		size_t low, high;

		for (low = 0, high = btwn; array[high] < value;)
		{
			printf("Value checked array[%ld] = [%d]\n", low, array[low]);
			low = high;
			high += btwn;
			/* high = (high + btwn) >= size ? size - 1 : high + btwn; */
			if (low >= size - 1)
				break;
		}
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		printf("Value found between indexes [%ld] and [%ld]\n", low, high);

		if (low >= size - 1)
			return (-1);

		for (; low <= high; low++)
		{
			printf("Value checked array[%ld] = [%d]\n", low, array[low]);
			if (array[low] == value)
				return (low);
		}
	}
	return (-1);
}
