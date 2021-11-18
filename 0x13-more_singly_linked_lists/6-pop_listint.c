#include "lists.h"

/**
 * pop_listint - frees the first node
 * @head: linked list
 * Return: numbers of the deleted node.
 */

int pop_listint(listint_t **head)
{
	int aux;
	listint_t *P;

	P = *head;

	if (P != NULL)
	{
		aux = P->n;
		*head = P->next;
		free(P);
		return (aux);
	}

	return (0);
}
