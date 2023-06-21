#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int t;
	int n;

	t = 0;
	while (t <= 9)
	{
		n = 0;
		while (n <= 9)
		{

			if ((n * t) > 10)
				_putchar(((n * t) / 10) + '0');
			else
				_putchar(' ');
			_putchar(((n * t) % 10) + '0');
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		t++;
		_putchar('\n');
	}

}
