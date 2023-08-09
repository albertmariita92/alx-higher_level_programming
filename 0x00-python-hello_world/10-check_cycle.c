#include "lists.h"

/**
 * check_cycle - function checks if there is a cycle list in a singly linked list 
 * @list: pointer to the beginning of the node
 * Return: 1 if there is a cycle and 0 if not 
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *check;

	if (list == NULL || list->next == NULL)
		return (0);
	current = list;
	check = current->next;

	while (current != NULL && check->next != NULL
		&& check->next->next != NULL)
	{
		if (current == check)
			return (1);
		current = current->next;
		check = check->next->next;
	}
	return (0);
}
