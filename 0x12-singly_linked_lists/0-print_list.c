#include <stdio.h>
#include "lists.h"

/**
 * print_list - to print the linked list
 * @h: pointer to the list_t to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t y = 0;

	while (x)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %y\n", x->len, x->str);
		x = x->next;
		y++;
	}

	return (y);
}
