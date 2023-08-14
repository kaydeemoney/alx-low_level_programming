#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by ", " and in ascending order.
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = '0';
while (num <= '9')
{
putchar(num);
if (num < '9')
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
