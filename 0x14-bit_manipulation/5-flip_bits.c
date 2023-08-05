#include "main.h"

/**
 * flip_bits - THIS is used to count the number of bits to change
 * to move from one number to another
 * @n: pointer to the first number
 * @m: pointer to the second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}

	return (count);
}
