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

	if (*s != '\0')
	{
		counter = 1;
		counter += _strlen_recursion(s + 1);
	}
	return (counter);
}
