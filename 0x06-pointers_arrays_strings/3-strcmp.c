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
	int  check, counter1, counter2;
	size_t i;
	counter1 = 0;
	counter2 = 0;
	if (strlen(s1) == strlen(s2))
	{
		for (i = 0; i < strlen(s1); i++)
		{
			if (s1[i] == s2[i])
				check += 0;
			counter1 += s1[i];
			counter2 += s2[i];
		}
	}
	if (counter1 > counter2 || strlen(s1) > strlen(s2))
		return (1);
	if (counter1 < counter2 || strlen(s1) < strlen(s2))
		return (-1);
	return (0);
}
