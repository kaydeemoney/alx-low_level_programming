#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints a character
 * from every two adjacent string
 * @str:string parameter
 */

void puts2(char *str)
{
	int a, p;
	
	p = 0;
	
	while (str[p] != 0)
	{
		p++;
	}
	for (a = 0; a < p; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
