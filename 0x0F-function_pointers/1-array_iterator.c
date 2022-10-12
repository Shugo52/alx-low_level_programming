#include "function_pointers.h"
/**
 * array_iterator - function
 *
 * @array: array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
