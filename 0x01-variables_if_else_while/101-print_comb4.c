#include <stdio.h>
/**
 * main - Prints all possible differnt combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int z;

	x = 48;
	while (x < 58)
	{
		y = 48;
		while (y < 58)
		{
			z = 48;
			while (z < 58)
			{
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56 || z != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
