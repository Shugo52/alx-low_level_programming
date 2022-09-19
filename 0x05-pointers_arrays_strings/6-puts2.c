#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

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
		printf("%c", str[i]);
	}
	printf("\n");
}
