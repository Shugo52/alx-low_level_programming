#include "main.h"
/**
 * set_bit - set bit to 1
 *
 * @n: address of integer
 * @index: index to change to bit value
 * Return: 1 if successful -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
