#include <stdio.h>
/**
 * main - Prints all possible differnt combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	x = 48;
	while (x < 58)
	{
		y = 48;
		while (y < 58)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
