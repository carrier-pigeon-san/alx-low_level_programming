#include <stdio.h>
#include <unistd.h>
/**
 * swap_int - swaps the values of two integers
 * @a: first value to be swapped
 * @b: second value to be swapped
 *
 * Return:Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
char *_strcpy(char *dest, char *src)
{
	int c;

	c = 0;
	while (src[c] != '\0')
	{
		if (c == 0)
			*dest = *src;
		else
			*(dest + c) = *(src + c);
		c++;
		dest[c] = '\0';
	}
	return (dest);
}
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "Holberton\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
