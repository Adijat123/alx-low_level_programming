#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t linked lists
 * @l: linked list of type listint_t to traverse the linked lists
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *l)
{
	size_t new = 0;

	while (l)
	{
		new++;
		l = l->next;
	}

	return (new);
}
