#include "main.h"
/**
 * print_triangle - draws a triagle on the terminal
 * @size: size of the triangle
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i;
	int j;
	int s;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = size - 1;
			while (j > i)
			{
				_putchar(' ');
				j--;
			}
			s = size - j - 1;
			while (s < size)
			{
				_putchar('#');
				s++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
