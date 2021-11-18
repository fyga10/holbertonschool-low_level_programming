#include "lists.h"

/**
 * listint_len - counts the elements
 * @h: the linked list
 * Return: elements printed
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
