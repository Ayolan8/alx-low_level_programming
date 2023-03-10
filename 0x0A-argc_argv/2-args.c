#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number of argument to be printed
 * @argv: array pointing to the argument to be printed
 * Return: 0
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
