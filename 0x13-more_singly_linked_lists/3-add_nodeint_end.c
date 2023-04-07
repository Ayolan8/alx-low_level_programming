#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: headd of the list
 * @n: the value to pass the node
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *endx;

	if (head == NULL)
		return (NULL);
	endx = *head;
	if (endx != NULL)
		while (endx->next != NULL)
			endx = endx->next;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		endx->next = new;
		new->next = NULL;
	}
	return (new);
}
