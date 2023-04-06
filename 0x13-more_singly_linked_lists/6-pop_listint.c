#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */

int pop_listint(listint_t **head)
{
	istint_t *start;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);

	start = *head;
	*head = start->next;
	n = start->n;
	free(start);

	return (n);
}
