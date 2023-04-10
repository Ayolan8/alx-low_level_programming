#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: haed of list
 * @index: index at which to delete a node
 * Return: 1 if successful or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pntr, *prv;
	unsigned int x = index;

	if (head == NULL || *head == NULL)
		return (-1);
	if (x == 0)
	{
		pntr = (*head)->next;
		free(*head);
		*head = pntr;
		return (1);
	}
	for (pntr = *head; x && pntr->next != NULL; x--, pntr = pntr->next)
		prv = pntr;
	if (x)
		return (-1);
	prv->next = prv->next->next;
	free(pntr);
	return (1);
}
