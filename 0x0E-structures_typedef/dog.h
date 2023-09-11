#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>

/**
 * struct dog - attributes of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: he who let the dogs out
 *
 * Description: this struct defines various elements attributed to the...
 * ...identity of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* #ifndef _DOG_H_ */
