#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 *
 * @head: the head of the list
 *
 * Return: NULL if error
 */
void free_listint(listint_t *h)
{
	listint_t *next;

	while (head)
	{
		next = head;
		head = head-> next;
		free(next);
	}
	free(head);
}
