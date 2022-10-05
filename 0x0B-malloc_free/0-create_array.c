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
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	arr[0] = c;
	return (arr);
}
