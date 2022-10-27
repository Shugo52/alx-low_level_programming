#include "main.h"
/**
 * binary_to_uint - converts 0 and 1
 * passed as string to integer
 *
 * @b: string to be converted
 * Return: converted binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	char *endptr;

	if (!b)
		return (0);
	result = strtol(b, &endptr, 2);
	if (*endptr)
		return (0);
	return (result);
}
