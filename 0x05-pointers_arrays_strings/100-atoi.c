#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts string to integer
 * @s: string parameter that is to be converted
 * Return:int data type
 */

int _atoi(char *s)
{
	int n, d, gee, numba, k, f;

	d = 0;
	n = 0;
	gee = 0;
	numba = 0;
	k = 0;
	f = 0;

	while (s[gee] != '\0')
		gee++;
	while (k < gee && f == 0)
	{

		if (s[k] == '-')
			++d;
		if (s[k] >= '0' && s[k] <= '9')
		{
			numba = s[k] - '0';
			if (d % 2)
				numba = -numba;
			n = n * 10 + numba;
			f = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			f = 0;
		}
		k++;
	}
	if (f == 0)
		return (0);
	return (n);
}
