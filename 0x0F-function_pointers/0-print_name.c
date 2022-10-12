#include "function_pointers.h"
/**
 * print_name - prints name
 * @f: function pointer
 *
 * @name: name to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
