#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *              Numbers should range from 0 to 99, and be separated by a space.
 *              All numbers should be printed with
 * two digits. Combinations are separated by ", ".
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1 = 0;
while (num1 <= 98)
{
int num2 = num1 + 1;
while (num2 <= 99)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');
if (num1 != 98)
{
putchar(',');
putchar(' ');
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
