#include "main.h"
#include <stdio.h>

/**
 * swap_int- it interchanges two number positions
 * @a:first number to use
 * @b:number to be exchanged or swap with the a
 */

void swap_int(int a, int b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
