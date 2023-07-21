#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: array in question as an integer parameter
 * @size: array length
 * @action: function parameter
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (array == NULL || action == NULL)
		returni;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
