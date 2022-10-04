#include "main.h"
#include <stddef.h>
/**
 * create_array - func to create array
 *
 * @size: size of array
 * @c: array type
 * Return: array address
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		return (NULL);
	char new_arr[size];

	new_arr[0] = c;
	return (p = new_arr);
}
