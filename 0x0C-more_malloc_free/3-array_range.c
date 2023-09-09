#include <stdlib.h>
#include "main.h"
/**
  *array_range - create array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: pointer to new created array.
  *NULL if malloc fail.
  *NULL if min > max.
  */
int *array_range(int min, int max)
{
	int range, i;
	int *x;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	x = malloc(range * sizeof(int));

	if (x == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(x + i) = min + i;
	}

	return (x);
}
