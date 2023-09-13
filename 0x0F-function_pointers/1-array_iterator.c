#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each...
 * ...element of an array.
 * @array: integer array argument
 * @size: number of elements in array
 * @action: function pointer to functions defining actions to be performed...
 * ...on each element of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0, i < size; i++)
			action(array[i]);
}
