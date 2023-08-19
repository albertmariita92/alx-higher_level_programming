#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the nth node of a dlistint_t linked list
 * @head: The pointer to the beginning of the list
 * @index: The index of the desired node (starting from 0)
 * Return: The node at the given index, or NULL if not found
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
