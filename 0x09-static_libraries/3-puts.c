#include "main.h"

/**
 * _puts - prints characters
 *
 * @str: character
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
