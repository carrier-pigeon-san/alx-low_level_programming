#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c < 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}
