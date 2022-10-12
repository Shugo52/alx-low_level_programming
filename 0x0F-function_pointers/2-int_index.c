#include "function_pointers.h"
/**
 * int_index - function
 *
 * @array: array of numbers
 * @size: size of array
 * @cmp: array element
 * Return: always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
