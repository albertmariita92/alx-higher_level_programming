#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: The pointer to head of the list
 * Return: nothing is returned
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
