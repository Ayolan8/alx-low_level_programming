#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of a ist
 * @idx: the index at which to add node
 * @n: the node's value to add
 * Return: new node address if successful, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int x;
	listint_t *pntr, *prv = NULL;

	if (head == NULL)
		return (NULL);

	x = idx;
	for (pntr = *head; x && pntr != NULL; x--, pntr = pntr->next)
		prv = pntr;
	pntr = malloc(sizeof(listint_t));
	if (pntr == NULL)
		return (NULL);
	if (prv != NULL)
	{
		pntr->next = prv->next;
		prv->next = pntr;
	}
	else
	{
		pntr->next = NULL;
	}
	if (*head == NULL || x == 0)
	{
		pntr->next = *head;
		*head = pntr;
	}
	pntr->n = n;
	return (pntr);
}
