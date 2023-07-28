#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list
 * @y: pointer to the list_t list
 *
 * Return: number of elements in y file
 */
size_t list_len(const list_t *y)
{
	size_t n = 0;

	while (y)
	{
		n++;
		y = y->next;
	}
	return (n);
}
