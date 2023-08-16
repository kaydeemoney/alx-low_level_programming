#include "main.h"

int _putchar(char c) {
return write(1, &c, 1);
}

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times followed by a new line
 */
void print_alphabet_x10(void)
{
char letter;
int i;
for (i = 0; i < 10; i++)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
