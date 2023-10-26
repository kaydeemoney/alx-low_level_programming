#include "main.h"

/**
 * kaydee
 * factorial - return the factorial of a num
 * @n: num to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
