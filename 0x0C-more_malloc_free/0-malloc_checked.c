#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - checks allocated memory
 *
 * @b: integer to allocate memory for
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *t;

	t = malloc(sizeof(unsigned int));
	if (t == NULL)
		exit(98);
	return (t);
	free (t);
}
