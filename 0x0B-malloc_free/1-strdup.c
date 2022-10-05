#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strdup - copy of string
 *
 * @str: string to be copied
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	size_t i;
	char *new_str;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * strlen(str + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i <= strlen(str); i++)
		new_str[i] = str[i];
	return (new_str);
	free(new_str);
}
