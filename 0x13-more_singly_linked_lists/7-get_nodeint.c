#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth nide of a list
 * @head: head of a linked list
 * @index: index of node
 * Return: nth node or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index--)
		if (head != NULL)
			head = head->next;
		else
			return (NULL);
	return (head);
}
