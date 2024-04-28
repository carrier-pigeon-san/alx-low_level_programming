#include "main.h"
void p_itoa(int product);
/**
 * print_times_table - prints the 'n' times table, starting with 0
 * @n: factor of multiplication
 */
void print_times_table(int n)
{
	int row, col, multiple, product;

	if (n < 0 || n > 15)
		return;

	for (row = 0, multiple = 0; row <= n; row++, multiple++)
	{
		for (col = 0; col <= n; col++)
		{
			product = multiple * col;
			if (col > 0)
				p_itoa(product);
			else
				_putchar(0 + '0');
			if (col < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
/**
* p_itoa - converts an integer to a string of characters and prints using...
* ..._putchar()
* @product: input integer
*/
void p_itoa(int product)
{
	int p_val, index, count, product_cp = product;
	char digit;
	char mutable_str[] = "    ";

	for (p_val = 0; product_cp != 0; p_val++)
		product_cp /= 10;

	index = p_val > 0 ? 4 - p_val : 3;

	for (count = 3; count >= index; count--)
	{
		digit = product % 10 + '0';
		product /= 10;
		mutable_str[count] = digit;
	}

	for (count = 0; count < 4; count++)
		_putchar(mutable_str[count]);
}
