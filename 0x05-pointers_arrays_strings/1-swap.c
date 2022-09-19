#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two integers
 *
 * @tmp integer variable
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
