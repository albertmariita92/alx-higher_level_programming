#include "lists.h"

/**
 * print_dlistint - Counts and displays the elements in a dlistint_t list
 *
 * @h: Pointer to the head of the list
 * Return: The nodes count in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodeCount;

	nodeCount = 0;

	if (h == NULL)
		return (nodeCount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
