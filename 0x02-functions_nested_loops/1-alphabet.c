#include <stdio.h>

int _putchar(char c) {
return write(1, &c, 1);
}

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
