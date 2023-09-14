#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of optional variables
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list first;
	size_t i;
	char *chars;
	char *non = "(nil)";

	va_start(first, n);

	for (i = 0; i < n; i++)
	{
		chars = va_arg(first, char*);
		if (chars == NULL)
			printf("%s", non);
		else
			printf("%s", chars);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(first);
}
