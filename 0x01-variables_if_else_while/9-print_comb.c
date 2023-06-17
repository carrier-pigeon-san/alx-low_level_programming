#include <stdio.h>
/**
 * main - Prints all combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 48;
	while (c < 58)
	{
		putchar(c);
		putchar(44);
		putchar(32);
		c++;
	}
	putchar('\n');
	return (0);
}
