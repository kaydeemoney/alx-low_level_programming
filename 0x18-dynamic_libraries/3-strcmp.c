#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to use
 * @s2: second string to use
 *
 * Return: less than zero if s1 is less than s2, zero if they're equal,
 * more than zero if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

