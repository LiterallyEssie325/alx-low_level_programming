#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a
 *  particular index of a linked list
 *  @head: input value
 *  @index: input value
 *  Return: 1 otherwise, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *now = NULL;
	unsigned int v;
	listint_t *past = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(past);
		return (1);
	}

	while (v < index - 1)
	{
		if (!past || !(past->next))
			return (-1);
		past = past->next;
		v++;
	}

	now = past->next;
	past->next = now->next;
	free(now);

	return (1);
}
