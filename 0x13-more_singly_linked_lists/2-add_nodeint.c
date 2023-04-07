#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a function that a new node at the beginning of a list
 * @head: the head of the to add node to
 * @n: the value to pass to n in node
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	if (head == NULL)
		return (NULL);
	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
