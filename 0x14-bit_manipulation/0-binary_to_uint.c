#include "main.h"

/**
 * binary_to_uint - THIS is used to convert the binary number of the unsigned int
 * @n: string of binary numbers.
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *n)
{
	int i;
	unsigned int dec_val = 0;

	if (!n)
		return (0);

	for (i = 0; n[i]; i++)
	{
		if (n[i] < '0' || n[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (n[i] - '0');
	}

	return (dec_val);
}
