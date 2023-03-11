#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number of argument to be entered
 * @argv: array to the argument
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int x;

	x = 0;
	while (x < argc)
		x++;
	printf("argc = %d\n", x - 1);
	return (0);
}