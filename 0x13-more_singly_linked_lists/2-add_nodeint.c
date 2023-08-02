#include "lists.h"

/**
 * add_nodeint - adds a new node for a linked list
 * @head: pointer to the head node of the list
 * @n: the address of the new element, or NULL if it fails
 *
 * Return: pointer to the address of the node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
