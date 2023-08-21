#include "main.h"
#include <stdio.h>

/**
 * swap_int - function to swap the value of two variables
 * @a: first pointer variable
 * @b: second pointer variable
 * @c: swap location of first pointer variable
 * @d: swap location of second pointer variable
 */

int *a;
int *b;

void swap_int(int *a, int *b)
{
*a=98;
*b=42;
printf("a=%d, b=%d\n", *a, *b);
  
int *c=0;
int *d=0;

*c = *a;
*d = *b;
*b=*c;
*a =*d;


printf("a=%d, b=%d\n", a, b);
}
