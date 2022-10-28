#include "main.h"

/**
 * clear_bit - Clears the bit at a given index, i.e. Clears the bit.
 *
 * @n: Pointer to number to clear it's indexed bit.
 * @index: Bit position to clear.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
