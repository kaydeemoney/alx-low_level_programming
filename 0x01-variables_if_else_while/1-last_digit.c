#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    int last = n % 10;  // Get the last digit

    if (last > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, last);
    }
    else if (last == 0)
    {
        printf("Last digit of %d is 0 and is 0\n", n);
    }
    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
    }

    return 0;
}
