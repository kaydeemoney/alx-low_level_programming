#include "main.h"
#include <stdio.h>
/**
 * main - a simple C function that takes a pointer to an integer
 * as a parameter and updates the value it points to with the value 98: 
 * Return: Always 0.
 * @n: number to work on
 * @reset_to_98 is the function that does the trick
 */
 
void reset_to_98(int *ptr){
*ptr=98;
}
int main(void)
{
    int n;
    int ptr;
    n = 402;
    *ptr=&n;
    printf("n=%d\n", n);
	printf("pointer=%p\n", ptr);
    reset_to_98(ptr);	
    printf("n=%d\n", n);
    return (0);
}

