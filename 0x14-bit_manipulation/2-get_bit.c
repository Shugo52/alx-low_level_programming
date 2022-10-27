#include "main.h"

/**
 * get_bit - gets the bit value of binary number
 *
 * @n: interger to convert to binary
 * @index: index of bit value
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int tmp[64];
	int i, j;
	int temp[64];

	if (index >= sizeof(n) * 8)
		return (-1);
	if (n == 0)
	{
		tmp[0] = 0;
	}

	if (n)
	{
		for (i = 0 ; n > 0; i++)
		{
			tmp[i] = n % 2;
			n /= 2;
		}

		for (j = i - 1; j >= 0; j--)
		{
			temp[j] = tmp[j];
		}
	}
	return (temp[index]);
}
