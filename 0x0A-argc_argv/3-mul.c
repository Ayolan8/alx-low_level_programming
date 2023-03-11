#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of argument to be printed
 * @argv: array pointing to the argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, mul = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			mul *= atoi(argv[x]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
