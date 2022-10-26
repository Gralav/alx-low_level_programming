#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node at the beginning
 *               of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
