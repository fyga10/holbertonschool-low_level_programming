#include "lists.h"
/**
 * list_len - countter of elements
 * @h: the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
size_t a;
for (a = 0; h != NULL; a++)
{
h = h->next;
}
return (a);
}
