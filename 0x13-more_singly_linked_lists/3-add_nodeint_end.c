#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a linked list
 * @head: input value
 * @n: input value
 *
 * Return: address of the new element otherwise, NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *digit;
	listint_t *vivid = *head;

	digit = malloc(sizeof(listint_t));
	if (!digit)
		return (NULL);
	digit->n = n;
	digit->next = NULL;
	if (*head == NULL)
	{
		*head = digit;
		return (digit);
	}

	while (vivid->next)
		vivid = vivid->next;

	vivid->next = digit;
	return (digit);
}
