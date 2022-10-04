#include "main.h"

/**
 * create_array - func to create array
 *
 * @size: size of array
 * @c: array type
 * Return: array address
 */
char *create_array(unsigned int size, char c)
{
	char arr[size];
	char *p;

	if (size == 0)
		return (NULL);
	arr[0] = c;
	return (p = &arr);
}