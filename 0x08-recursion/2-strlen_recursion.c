#include "main.h"
/**
 * _strlen_recursion - string length
 *
 * @s: string
 * Return: returns string length
 */
int _strlen_recursion(char *s)
{
	int counter;

	counter = 1;
	if (*s == '\0')
		return (0);
	return (counter + _strlen_recursion(s + 1));
}
