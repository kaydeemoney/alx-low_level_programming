#include "main.h"
#include <stdio.h>

/**
 * print_array - d number of
 * elements of an arrays
 * @a:first number here
 * @n:number of array elements
 */

void print_array(int *a, int n)
{
	int fm;

	for (fm = 0; fm < n; fm++)
	{
		if (fm == 0)
		{
			printf("%d", a[fm]);
		}
		else
		{
			printf(", %d", a[fm]);
		}
	}
	printf("\n");
}
