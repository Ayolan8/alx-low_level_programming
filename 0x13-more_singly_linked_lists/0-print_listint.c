#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint
 * @h: node pointer to the elements to be printed
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *pntr;
	size_t x = 0;

	pntr = h;
	while (pntr != NULL)
	{
		printf("%d\n", pntr->n);
		pntr = pntr->next;
		x++;
	}
	return (x);
}

