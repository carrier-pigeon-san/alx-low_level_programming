#include "variadic_functions.h"
/**
 * print_all - prints anythang
 * @format - format specifier
 *
 * Return: void;
 */
void print_all(const char * const format, ...)
{
	va_list val;
	int i;
	char ch;
	int dec;
	double flt;
	char *chars;

	va_start(val, format);

	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
					ch = va_arg(val, int), printf("%c", ch);
					break;
			case 'i':
					dec = va_arg(val, int),	printf("%d", dec);
					break;
			case 'f':
					flt = va_arg(val, double), printf("%f", flt);
					break;
			case 's':
					chars = va_arg(val, char*), printf("%s", chars != NULL ? chars : "(nil)");
					break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
		{
			char *separator = ", ";

			printf("%s", separator);
		}
		i++;
	}
	va_end(val), printf("\n");
}
