#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: input value
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t fig = 0;

	while (h)
	{
		fig++;
		h = h->next;
	}
	return (fig);
}
