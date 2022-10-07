#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * malloc_checked - checks allocated memory
 *
 * @b: integer to allocate memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(sizeof(b);
	if (t == NULL)
		exit(98);
	return (t);
	free (t);
}
