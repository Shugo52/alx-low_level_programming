#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	size_t i, n;

	n = strlen(dest);
	for (i = 0; i < strlen(src); i++)
	{
		dest[n + i] = src[i];
	}
	dest[strlen(dest)] = '\0';
	return (dest);
}
