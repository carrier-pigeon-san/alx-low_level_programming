#include <stdio.h>
/**
 * main - prints all possible combinations of two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3, digit4;

	digit4 = 48;
	while (digit4 <= 57)
	{
		digit3 = 48;
		while (digit3 <= 57)
		{
			digit2 = 48;
			while (digit2 <= 57)
			{
				digit1 = 48;
				while (digit1 <= 57)
				{
					if ((digit2 * 10 + digit1) > (digit4 * 10 + digit3))
					{
						putchar(digit4);
						putchar(digit3);
						putchar(' ');
						putchar(digit2);
						putchar(digit1);
					}
					if (((digit2 * 10 + digit1) > (digit4 * 10 + digit3))
					&& (digit3 != 56 || digit4 != 57))
					{
						putchar(',');
						putchar(' ');
					}
					digit1++;
				}
				digit2++;
			}
			digit3++;
		}
		digit4++;
	}
	putchar('\n');
	return (0);
}
