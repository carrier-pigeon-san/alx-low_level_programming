#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;

	h1 = 0;
	while (h1 <= 2)
	{
		h2 = 0;
		while (h2 <= 9)
		{
			m1 = 0;
			while (m1 < 6)
			{
				m2 = 0;
				while (m2 <= 9)
				{
					if (h1 != 2 || h2 < 4)
					{
						_putchar(h1 + '0');
						_putchar(h2 + '0');
						_putchar(':');
						_putchar(m1 + '0');
						_putchar(m2 + '0');
						_putchar('\n');
					}
					m2++;
				}
				m1++;
			}
			h2++;
		}

		h1++;
	}
}
