#include "main.h"
#include <stdio.h>

/**
 * print_rev - fuction that reverse string input
 * @s:string parameter
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;
	while (s[b] != '\0')
	{
		b++;
	}

	for (a = b - 1; a >= 0; --a)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
