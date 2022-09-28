#include "main.h"
/**
 * _puts_recursion - recursive function
 *
 * @s: character
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
		return;
	_putchar(s[i]);
	_puts_recursion((s - s[i]);
	_putchar('\n');
}
