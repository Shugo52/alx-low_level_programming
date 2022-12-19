#include "main.h"

/**
 * _islower - check if c is lowercase
 *
 * @c: char to check
 * Return - 1 on success 0 on fail
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
