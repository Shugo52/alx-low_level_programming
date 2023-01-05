#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: string 1
 * @s2: second string
 * Return: o if equal positive if greater negative if less
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] != '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}
