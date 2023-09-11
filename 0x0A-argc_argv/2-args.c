#include <stdio.h>
#include "main.h"

/**
 * main - print all argument it receive
 * @argc: no of argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
