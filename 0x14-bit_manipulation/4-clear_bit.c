#include "main.h"

/**
 * clear_bit - THIS is used to know the value of a given bit to 0
 * @n: pointer to the address of change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
