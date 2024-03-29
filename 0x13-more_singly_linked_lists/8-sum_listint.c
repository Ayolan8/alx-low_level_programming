#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum of all data
 * @head: head of list
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	int x = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
