#include "main.h"
#include <stddef.h>
#include <stdlib.h>
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
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
	free(arr);
}
