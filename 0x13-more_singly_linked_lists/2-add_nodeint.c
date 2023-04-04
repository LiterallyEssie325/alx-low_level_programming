#include "lists.h"

/**
 * *add_nodeint - adds a new mode at the beginning of a linked list
 * @head: input value
 * @n: input value
 *
 * Return: address of the new element otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *curry;

	curry = malloc(sizeof(listint_t));
	if (!curry)
		return (NULL);

	curry->n = n;
	curry->next = *head;
	*head = curry;
	return (curry);
}
