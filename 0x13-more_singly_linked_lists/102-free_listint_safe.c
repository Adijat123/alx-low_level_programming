#include "lists.h"

/**
 * free_listint_safe - function to free a listint_t linked list
 * @n: pointer to the first pointer node in the listint_t linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **n)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!n || !*n)
		return (0);

	while (*n)
	{
		diff = *n - (*n)->next;
		if (diff > 0)
		{
			temp = (*n)->next;
			free(*n);
			*n = temp;
			len++;
		}
		else
		{
			free(*n);
			*n = NULL;
			len++;
			break;
		}
	}

	*n = NULL;

	return (len);
}
