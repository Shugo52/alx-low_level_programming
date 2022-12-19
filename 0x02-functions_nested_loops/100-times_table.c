#include "main.h"
/**
 * print_times_table - prints time table
 * if n < 15 or n > 0
 * 
 * @n: number for times table
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n > 15 || n < 0)
	{} else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				if (j == 0)
					_putchar('0');
				if ((i * j) <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod);
				} else if (prod > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (prod / 100));
					_putchar('0' + ((prod / 10) % 10));
					_putchar('0' + (prod % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
			}
			_putchar('\n');
		}
	}
}
