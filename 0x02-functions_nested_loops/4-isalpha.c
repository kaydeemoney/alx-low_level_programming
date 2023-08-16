#include "main.h"
/**
 * _isalpha - a function that
 * checks for alphabetic character.
 * we are using ascii value to be accurate
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
return (1);
else
return (0);
}

