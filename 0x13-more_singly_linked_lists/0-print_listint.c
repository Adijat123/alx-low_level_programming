#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @l: linked list of type listint_t to print
 *
 * Return: number of nodes to print
 */
size_t print_listint(const listint_t *l)
{
	size_t new = 0;

	while (l)
	{
		printf("%d\n", l->n);
		new++;
		l = l->next;
	}

	return (new);
}
