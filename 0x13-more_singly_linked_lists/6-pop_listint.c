#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: head of the linked list
 * Return: the head of the node's data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int x;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	x = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (x);
}
