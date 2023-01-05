#include "main.h"

/**
 * _strncat - concatenate n bytes of a string to another
 *
 * @dest: destination string
 * @src: source string
 * @n: integer number of bytes
 * Return: pointer to dest
*/

char *_strncat(char *dest, char *src,int n)
{
	int i, j;

	j = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[j + i] = src[i];

	dest[strlen(dest)] = '\0';
	return (dest);
}