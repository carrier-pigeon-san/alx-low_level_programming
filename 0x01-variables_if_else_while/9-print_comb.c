#include <stdio.h>
/**
 * main - Prints all combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
