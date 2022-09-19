#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - printsrev_string reverse
 *
 * @s: character
 */

void rev_string(char *s)
{
	char *tmp = s;
	int i;
	int j = 0;

	for (i = (_strlen(s) - 1); i >= 0; i--)
	{
		s[i] = tmp[j];
		j++;
	}
}
