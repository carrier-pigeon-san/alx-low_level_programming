#include "variadic_fuctions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of optional variables
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list first;
	size_t i;

	va_start(first, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(first, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
