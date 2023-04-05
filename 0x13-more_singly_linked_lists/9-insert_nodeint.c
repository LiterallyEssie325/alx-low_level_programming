#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @idx: input value
 * @head: input value
 * @n: input value
 *
 * Return: address of the new node otherwise, NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curry;
	listint_t *thyme = *head;
	unsigned int d;

	curry = malloc(sizeof(listint_t));
	if (!curry || !head)
		return (NULL);

	curry->n = n;
	curry->next = NULL;

	if (idx == 0)
	{
		curry->next = *head;
		*head = curry;
		return (curry);
	}

	for (d = 0; thyme && d < idx; d++)
	{
		if (d == idx - 1)
		{
			curry->next = thyme->next;
			thyme->next = curry;
			return (curry);
		}
		else
			thyme = thyme->next;
	}
	return (NULL);
