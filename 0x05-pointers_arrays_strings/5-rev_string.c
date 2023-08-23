#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function to reverse a string where
 * @s:string parameter
 */

void rev_string(char *s)
{
	int a, b, q;
	char r;

	p = 0;
	q = 0;
	while (s[b] != '\0')
	{
		b++;
	}

	q = b - 1;
	for (a = 0; a < b / 2; a++)
	{
		r = s[a];
		s[a] = s[q];
		s[q--] = r;
	}
}
