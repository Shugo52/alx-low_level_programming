#include "calc.h"

/**
 * get_op_func - gets function with respect to operator
 * @s: operator
 * Return: function pointer or NULL
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (!(strcmp(ops[i].op, s)))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
