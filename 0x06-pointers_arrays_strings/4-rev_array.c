#include "main.h"
/**
 * reverse_array - reverse array of integer
 * @n: number of element in d array
 * @a: array to be reverse
 */
void reverse_array(int *a, int n)
{
	int x, y, tmp;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y--] = tmp;
	}
}
