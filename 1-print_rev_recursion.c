#include "main.h"

/**
 * _puts_recursion - print a single string in reverse.
 * is why we need to do it for every character
 * @s: pointer to character
 * then print out a new line
 * Return: None.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{

		_puts_recursion(s + 1);
		_putchar(*s);
		
	}
	else
	{
	_putchar('\n');
	}
}
