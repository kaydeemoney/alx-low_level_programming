#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int x, j;

	for (x = 0; x < 8; x++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[x][j]);
		}
		_putchar('\n');
	}
}
