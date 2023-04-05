#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: a pointer to the elements to be returned
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int num_of_elem = 0;

	while (h != NULL)
	{
		num_of_elem++;
		h = h->next;
	}
	return (num_of_elem);
}
