#include "variadic_functions.h"
/**
 * print_numbers - prints numbers passed as arguments
 *
 * @separator: number seperator
 * @n: amount of arguments to be passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*variables to use*/
	unsigned int i;
	va_list ap;

	/*to check for number of arguments*/
	if (n == 0)
		exit(0);

	/*the porcess of printing numbers passed as arguments*/
	va_start(ap, n);
	if (n)
	{
		for (i = 0; i < n - 1; i++)
		{
			/*check for null separator and print without it*/
			if (separator == NULL)
			{
				printf("%d", va_arg(ap, int));
			} else /*print with seperator*/
			{
				printf("%d%s", va_arg(ap, int), separator);
			}
		}
		printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
