#include "main.h"
/**
 * array_range - creates an array of integers that contain all the values...
 * ...from min (included) to max (included), ordered from min to max
 * @min: minimum value in range
 * @max: maximum value in range
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i, range;
	int *arr;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	arr = malloc(range * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= range; i++, min++)
		arr[i] = min;
	return (arr);
}
