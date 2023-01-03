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
	size_t i, n;

	n = strlen(str) / 2;
	if ((strlen(str)) % 2 == 1)
		n = (strlen(str) - 2) / 2;

	for (i = n; i < strlen(str); i++)
		_putchar(str[i]);

	_putchar('\n');
}
