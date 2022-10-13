#include "variadic_functions.h"
/**
 * sum_them_all - sums all arguments
 *
 * @n: number of arguments to be added
 * Return: always
 */
int sum_them_all(const unsigned int n, ...)
{
	var_list ap;
	int i, sum;

	i = 0;
	sum = 0;

	if (n == 0)
		return (0);
	var_start(ap, n);

	for (i = 0; i < n; i++)
		sum += var_arg(ap, int);
	var_end(ap);
	return (sum);
}
