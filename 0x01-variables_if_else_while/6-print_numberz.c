c#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers in base 10 followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "0123456789\n";
int index = 0;

while (index < sizeof(str) - 1)
{
putchar(str[index]);
index++;
}

return (0);
}
