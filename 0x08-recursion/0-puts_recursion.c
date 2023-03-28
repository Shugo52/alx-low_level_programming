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
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
