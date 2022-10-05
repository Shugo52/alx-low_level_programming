#include <stdlib.h>
#include <stddef.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - adds two strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	size_t i;
	char *new_str;
	size_t n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		return (new_str = "");
	n = strlen(s1) + strlen(s2) + 1;
	new_str = malloc(n);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		new_str[i] = s1[i];
	for (i = 0; i <= strlen(s2); i++)
		new_str[i + strlen(s1)] = s2[i];
	return (new_str);
	free(new_str);
}
