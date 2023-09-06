#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: heights of the matrix
 * Return: pointer to the created matrix returning success
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = (int *) malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			free(arr);
			for (j = 0; j <= x; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (j = 0; j < width; j++)
		{
			arr[x][j] = 0;
		}
	}
	return (arr);
}
