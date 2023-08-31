#include "main.h"

/**
 * _print_rev_recursion - print characters in reverse
 * @s: pointer to string parameters
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
