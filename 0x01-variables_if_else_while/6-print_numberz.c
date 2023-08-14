#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers in base 10 followed by a new line
 * Return: Always 0 (Success)
 */
int main(void) {
int digit = 0;

while (digit <= 9) {
int ascii_code = digit + 48;
putchar(ascii_code);
digit++;
}
putchar(10);
return (0);
}
