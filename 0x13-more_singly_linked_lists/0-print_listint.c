#include "lists.h"

/**
 * print_listint - prits all the elements of a listint_t list
 * @h: input value
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		printf("%d\n", h->n);
		digit++;
		h = h->next;
	}
	return (digit);
}
