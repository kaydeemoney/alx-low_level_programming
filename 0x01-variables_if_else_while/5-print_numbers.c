#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers in base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;
char digitchar;
while (digit < 10)
{
digitchar = digit + '0';
putchar(digitchar);
digit++;
}

putchar('\n');

return (0);
}
