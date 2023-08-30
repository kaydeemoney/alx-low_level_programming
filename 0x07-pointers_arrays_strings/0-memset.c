#include "main.h"

/**
 * *_memset - this function fills memory with a constant byte
 * @s: memory area that is to be filled
 * @b: character to copy
 * @n: the number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
