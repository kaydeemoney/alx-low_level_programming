#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create a array of chars,
 * and will initialize it with a specific char
 * @size: size of the arrays to be created
 * @c: char to initialize the array c created
 * Return: pointer to the array (success), nULL (error)
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	a = (char *) malloc(sizeof(char) * size);

	if (a == NULL)
		return (0);

	while (i < size)
	{
		*(a + i) = c;
		i++;
	}

	*(a + i) = '\0';

	return (a);
}
