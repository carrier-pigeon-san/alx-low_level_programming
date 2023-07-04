#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: array argument
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int r;
	int c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[r][c]);
		_putchar('\n');
	}
}

