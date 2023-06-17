#include <stdio.h>
/**
 * main - Prints all numbers of base 16 in lowercase
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
		c++;
	}

	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
