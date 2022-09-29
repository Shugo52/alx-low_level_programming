#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
/**
 * _strcat - concatenate strings
 *
 * @dest: destination string
 * @src: source string
 * Return: returns new_string
 */

char *_strcat(char *dest, char *src)
{
	int n;
	char *new_string;
	int i;
	int j;

	j = 0;
	n = _strlen(dest - 1) + _strlen(src - 1);
	new_string = malloc(n);
	for (i = 0; i < n; i++)
	{
		if (j < _strlen(dest - 1) || j < _strlen(src - 1))
		{
			if (i < _strlen(dest))
			{
				new_string[i] = dest[j];
			}
			if (i == _strlen(dest))
			{
				j = 0;
			}
			if (i > _strlen(dest - 1))
			{
				new_string[i] = src[j];
			}
		}
		j++;
	}
	return (new_string);
}
