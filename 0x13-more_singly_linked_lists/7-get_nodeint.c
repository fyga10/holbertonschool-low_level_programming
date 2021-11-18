#include "lists.h"

/**
 * get_nodeint_at_index - returns a node
 * @head: The head of the linked list
 * @index: index to return
 * Return: node of the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int i = 0;

	aux = head;

	while (aux != NULL && i <= index)
	{
		if (i == index)
			return (aux);
		i++;
		aux = aux->next;
	}
	return (NULL);
}
