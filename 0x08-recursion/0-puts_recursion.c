#include "main.h"

/**
 * _puts_recursion - print a single string.
 * is why we need to do it for every character
 * @s: pointer to character
 * then print out a new line
 * Return: None.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
