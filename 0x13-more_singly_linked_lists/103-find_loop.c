#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: listint_t linked list to find
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *head = head;
	listint_t *head2 = head;

	if (!head)
		return (NULL);

	while (head && head2 && head->next)
	{
		head2 = head2->next->next;
		head = head2->next;
		if (head2 == head)
		{
			head = head;
			while (head != head2)
			{
				head = head->next;
				head2 = head2->next;
			}
			return (head2);
		}
	}

	return (NULL);
}
