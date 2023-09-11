#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 *
 * Return: a pointer to the first occurrence of the char
 * c in the string s, or NULL if the char is not found
 */
char *_strchr(char *s, char c)
{
		int xg;

		while (1)
		{
			sg = *s++;
			if (sg == c)
			{
				return (s - 1);
			}
			if (sg == 0)
			{
				return (NULL);
			}
		}
}
