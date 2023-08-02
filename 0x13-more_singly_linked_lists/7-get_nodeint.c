#include "lists.h"

/**
 * get_nodeint_at_index returns the nth node of a listint_t linked list
 * @head: first node in the listint_t list
 * @index: index of the node to starting at 0
 *
 * Return: pointer to the node if it exists, or NULL if it doesn’t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}

	return (temp ? temp : NULL);
}
