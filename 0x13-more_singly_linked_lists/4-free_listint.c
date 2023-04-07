#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: head of list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	if (head == NULL)
		return;
	for (next = head->next; head != NULL; head = next)
	{
		next = head->next;
		free(head);
	}
}
