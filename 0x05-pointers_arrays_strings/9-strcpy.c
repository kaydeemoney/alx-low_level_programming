#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copy a string from one variable
 * location to another location
 * @dest:parameter to recieve d
 * copy destination
 * @src:parameter that is to be copied from
 * Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	int fm, p;

	p = 0;
	while (src[p] != '\0')
	{
		p++;
	}

	for (fm = 0; fm < p; fm++)
	{
		dest[fm] = src[fm];
	}

	dest[fm] = '\0';
	return (dest);
}
