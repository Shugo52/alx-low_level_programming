#include "variadic_functions.h"
/**
 * print_all - prints arguments passed
 * @format: format of argument
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, n;
	char *tmp_string;

	i = 0;
	n = strlen(format);
	va_start(ap, format);
	while (i < n - 1)
	{
		switch(format[i])
		{
			case 'c':
			printf("%c, ", va_arg(ap, int));
			break;
			case 'i':
			printf("%d, ", va_arg(ap, int));
			break;
			case 'f':
			printf("%f, ", va_arg(ap, double));
			break;
			case 's':
			tmp_string = va_arg(ap, char *);
			if (tmp_string == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s, ", tmp_string);
			break;
			default:
			break;
		}
		i++;
	}
	switch(format[i])
                {
                        case 'c':
                        printf("%c", va_arg(ap, int));
                        break;
                        case 'i':
                        printf("%d", va_arg(ap, int));
                        break;
                        case 'f':
                        printf("%f", va_arg(ap, double));
                        break;
                        case 's':
                        tmp_string = va_arg(ap, char *);
                        if (tmp_string == NULL)
                        {
                                printf("(nil)");
                                break;
                        }
                        printf("%s", tmp_string);
                        break;
                        default:
                        break;
                }

	va_end(ap);
	printf("\n");
}
