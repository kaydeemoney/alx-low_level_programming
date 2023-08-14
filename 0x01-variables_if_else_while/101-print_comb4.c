#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 *              Numbers must be separated by ", " and in ascending order.
 *              The three digits must be different, and certain combinations
 * are considered the same.
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1 = 0;
while (num1 <= 7)
{
int num2 = num1 + 1;
while (num2 <= 8)
{
int num3 = num2 + 1;
while (num3 <= 9)
{
putchar(num1 + '0');
putchar(num2 + '0');
putchar(num3 + '0');
if (num1 != 7)
{
putchar(',');
putchar(' ');
}
num3++;
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
