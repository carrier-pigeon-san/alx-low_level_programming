#include "dog.h"
/**
 * new_dog - creates a new instance of dog_t struct
 * @name: name of the dog
 * @age: age of said dog
 * @owner: he who has the authority to let the dogs out
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i, j, c;
	char *name_cpy, *owner_cpy;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	name_cpy = malloc(sizeof(char) * i + 1);
	if (name_cpy == NULL)
	{
		free(doggy);
		return (NULL);
	}
	owner_cpy = malloc(sizeof(char) * j + 1);
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(doggy);
		return (NULL);
	}
	for (c = 0; c <= i; c++)
		name_cpy[c] = name[c];
	for (c = 0; c <= j; c++)
		owner_cpy[c] = owner[c];

	doggy->name = name_cpy;
	doggy->owner = owner_cpy;
	doggy->age = age;

	return (doggy);
}

