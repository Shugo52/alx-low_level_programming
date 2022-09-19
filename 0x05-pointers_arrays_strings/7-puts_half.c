#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints other half
 *
 * @str: character
 */

void puts_half(char *str)
{
	int i;
	int n = 0;

	if ((_strlen(str) % 2) != 0)
		n = (_strlen(str) + 1) / 2;
	n = _strlen(str) / 2;
	for (i = n; i < _strlen(str); i++)
	{
		printf("%c", str[i]);
	}
}
