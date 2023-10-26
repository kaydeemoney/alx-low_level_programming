#include "main.h"

/**
 * _strlen_recursion - return the length s of a string
 * @s: string to calculate the lenght of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
