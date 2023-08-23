#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * to standard output
 * @str:string parameter to check out  string
 * to print out
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
		_putchar('\n');
}
