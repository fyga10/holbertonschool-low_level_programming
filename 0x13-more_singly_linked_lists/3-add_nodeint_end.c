#include "lists.h"

/**
 * add_nodeint_end - add a node
 * @head: double pointer
 * @n: int
 * Return: created node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *new_node;

	aux = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	do {
		if (aux == NULL)
		{
			*head = new_node;
			new_node->n = n;
			new_node->next = NULL;
			break;
		}

		if (aux->next == NULL)
		{
			aux->next = new_node;
			new_node->next = NULL;
			new_node->n = n;
			break;
		}
		aux = aux->next;
	} while (aux != NULL);

	return (new_node);
}
