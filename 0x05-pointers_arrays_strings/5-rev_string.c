#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function to reverse a string where
 * @s:string parameter
 */

void rev_string(char *s)
{
	int a, p, q;
	char r;

	p = 0;
	q = 0;
	while (s[p] != '\0')
	{
		p++;
	}

	q = p - 1;
	for (a = 0; a < p / 2; a++)
	{
		r = s[a];
		s[a] = s[q];
		s[q--] = r;
	}
}
