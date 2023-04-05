#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: input value
 *
 * Return: the deleted node otherwise, 0
 */
int pop_listint(listint_t **head)
{
	listint_t *thyme;
	int s;

	if (!head || !*head)
		return (0);

	s = (*head)->n;
	thyme = (*head)->next;
	free(*head);
	*head = thyme;
	return (s);
}
