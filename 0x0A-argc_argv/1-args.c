#include <stdio.h>
#include "main.h"

/**
 * main - print the no of arguments passed to the program
 * @argc: no of arguments
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
