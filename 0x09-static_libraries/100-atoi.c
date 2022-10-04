#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _atoi - converts to int
 *
 * @s: character
 * Return: returns number
 */
int _atoi(char *s)
{
	int checker = 0;
	int new_num;
	int counter = strlen(s);
	int j = 0;
	int i;
	char *new_string;

	for (i = 0; i < counter; i++)
	{
		if (*(s + i) >= '0' && s[i] <= '9')
		{
			checker++;
		}
	}
	new_string = malloc(checker + 1);
	for (i = 0; i < counter; i++)
	{
		if (*(s + i) >= '0' && s[i] <= '9')
		{
			new_string[j] = s[i];
			j++;
		}
	}
	if (checker == 0)
		return (0);
	new_num = atoi(new_string);
	free(new_string);
	return (new_num);
}
