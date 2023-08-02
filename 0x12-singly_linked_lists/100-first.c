#include "main.h"
/**
 * the_tortoise - prints a string before main function is executed
 */
void the_tortoise(void)__attribute__((constructor));

void the_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
