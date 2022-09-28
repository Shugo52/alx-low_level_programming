#include <string.h>
#include "main.h"
/**
 * _strcat - concatenate strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: returns new_string
 */

char *_strcat(char *dest, char *src)
{
	char *new_string;

	new_string = strcat(dest, src);
	return (new_string);
}
