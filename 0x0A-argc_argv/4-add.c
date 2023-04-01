#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * @argc: number of argument to be printed
 * @argv: array pointing to the argument to be printed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		printf("%s", "0");

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
