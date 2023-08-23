#include "main.h"
#include <stdio.h>


/**
 * puts_half - function that would
 * print the second half of a list
 * as well as d last number if odd
 * @str:string parameter
 */

void puts_half(char *str)
{
	int b, n, c;
	b = 0;
	while (str[b] != '\0')
	{
		b++;
	}

	if (b % 2 == 0)
	{
		for (c = b / 2; str[c] != '\0'; c++)
		{
			_putchar(str[c]);
		}
	}

	else if (b % 2 != 0)
	{
		for (n = (b - 1) / 2; n < b - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
