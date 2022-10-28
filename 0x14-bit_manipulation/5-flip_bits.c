#include "main.h"

/**
 * flip_bits - Returns min. number of bits to flip to arrive at a number.
 *
 * @n: Number whose bits are to be flipped.
 * @m: Target number.
 *
 * Return: Minimum number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t count = 0;

	n ^= m;

	while (n)
	{
		if (n & 1)
			count++;

		n >>= 1;
	}

	return (count);
}
