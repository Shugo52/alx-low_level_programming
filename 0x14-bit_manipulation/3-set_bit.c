#include "main.h"
/**
 * set_bit - set bit to 1
 *
 * @n: address of integer
 * @index: index to chsnge to bit value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
