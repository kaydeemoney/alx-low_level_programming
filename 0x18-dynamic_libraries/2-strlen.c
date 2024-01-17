#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function that calculates size or
 * lenght of a string
 * @s:string parameter checking string to be measured
 * Return:len
 */

int _strlen(char *s)
{
	int len = 0;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		len++;
	}
	return (len);
}
