#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects correct function to perform mathematical operation
 * @s: mathematical operator
 * Return: pointer to function that corresponds to operator given as the
 * parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].f != NULL)
	{
		if (*(ops[i].op) == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}

