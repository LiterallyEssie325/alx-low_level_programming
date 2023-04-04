#include "list.h"

/**
 * free_listint - fress a linked list
 * @head: input value
 */
void free_listint(listint_t *head)
{
	listint_t *thyme;

	while (head)
	{
		thyme = head->next;
		free(head);
		head = thyme;
	}
}
