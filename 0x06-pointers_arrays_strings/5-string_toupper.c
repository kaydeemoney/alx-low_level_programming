#include "main.h"
/**
 * string_toupper - change all lowercases letters of thr string
 * to uppercase characters
 * @s: string to modify
 *
 * Return: the string
 */
char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
	}
	return (s);
}
