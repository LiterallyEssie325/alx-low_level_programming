#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a linked list
 * @head: input value
 * @index: input value
 *
 * Return: the nth node otherwise, NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;
	listint_t *cute = head;

	while (cute && r < index)
	{
		cute = cute->next;
		r++
	}
	return (cute ? cute : NULL);
}
