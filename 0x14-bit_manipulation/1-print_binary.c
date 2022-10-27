#include "main.h"

/**
 * print_binary - prints binary of integer given
 *
 * @n: unsigned integer
 */
void print_binary(unsigned long int n)
{
	int tmp[64];
	int i, j;

	if (n == 0)
	{
		_putchar('0');
	}

	if (n)
	{
		for (i = 0 ; n > 0; i++)
		{
			tmp[i] = n % 2;
			n /= 2;
		}

		for (j = i - 1; j >= 0; j--)
			_putchar(tmp[j] + '0');
	}
}
