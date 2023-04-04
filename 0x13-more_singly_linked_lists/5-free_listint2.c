#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: input value
 */
void free_listint2(listint_t **head)
{
	listint_t *digit;

	if (head == NULL)
		return;

	while (*head)
	{
		digit = (*head)->next;
		free(*head);
		*head = digit;
	}

	*head = NULL;
}
