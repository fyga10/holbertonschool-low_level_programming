#include "lists.h"

/**
 * free_listint2 - frees the memory
 * @head: head of the linked list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (*head == NULL)
	{
		head = NULL;
		return;
	}

	while (*head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	head = NULL;
}
