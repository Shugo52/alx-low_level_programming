#include "variadic_functions.h"
/**
 * print_strings - prints strings passed as arguments
 *
 * @separator: separates strings passed
 * @n: number of arguments passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*variables needed*/
	size_t i;
	va_list ap;

	i = 0;
	/*process*/
	va_start(ap, n);
	if (n)
	{
		for (i = 0; i < n - 1; i++)
		{
			/*if separator is NULL, print without separator*/
			if (separator == NULL)
				printf("%s", va_arg(ap, char *));
			else /*print with separator*/
				printf("%s%s", va_arg(ap, char *), separator);
		}
		printf("%s", va_arg(ap, char *));
	}
	va_end(ap);
	printf("\n");
}
