#include "dog.h"
/**
 * free_dog - frees memory allocated to dog struct
 * @d: struct variable argument
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
