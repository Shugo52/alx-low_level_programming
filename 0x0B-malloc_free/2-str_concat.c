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
	size_t j;
	char *new_str;
	size_t n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = 0;
	n = strlen(s1) + strlen(s2) + 1;
	new_str = malloc(n);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		if (j < strlen(s1) || j < strlen(s2))
		{
			if (i < strlen(s1))
			{
				new_str[i] = s1[j];
			}
			if (i == strlen(s1))
			{
				j = 0;
			}
			if (i > strlen(s1))
			{
				new_str[i] = s2[j];
			}
		}
		j++;
	}
	return (new_str);
	free(new_str);
}
