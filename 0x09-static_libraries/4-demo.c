#include <unistd.h>
/**
 * print_square - draws a square on the terminal
 * @size: size of the square
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_square(int size)
{
	int i;
	int j;
	int s;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = size - 1;
			while (j > i)
			{
				_putchar(' ');
				j--;
			}
			s = size - j - 1;
			while (s < size)
			{
				_putchar('#');
				s++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
int main(void)
{
	print_square(2);
	print_square(10);
	print_square(1);
	print_square(0);
	return (0);
}
