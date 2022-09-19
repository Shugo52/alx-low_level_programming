#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints characters
 *
 * @str: character
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		printf("%c,", str[i]);
	}
	printf("\n");
}
