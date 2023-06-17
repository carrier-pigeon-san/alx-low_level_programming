#include <stdio.h>
/**
 * main - Prints alphabet in lowercase reverse order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
