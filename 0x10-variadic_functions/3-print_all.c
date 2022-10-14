#include "variadic_functions.h"
/**
 * print_all - prints arguments passed
 * @format: format of argument
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	size_t i;
	char *tmp_string;
	char *separator;

	i = 0;
	separator = ", ";
	va_start(ap, format);
	while (i < strlen(format))
	{
		if (i == (strlen(format) - 1))
			separator = "";
		switch (format[i])
		{
			case 'c':
			printf("%c%s", va_arg(ap, int), separator);
			break;
			case 'i':
			printf("%d%s", va_arg(ap, int), separator);
			break;
			case 'f':
			printf("%f%s", va_arg(ap, double), separator);
			break;
			case 's':
			tmp_string = va_arg(ap, char *);
			if (tmp_string)
			{
				printf("%s%s", tmp_string, separator);
				break;
			}
			printf("(nil)");
			break;
			default:
			break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
