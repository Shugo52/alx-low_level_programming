#include "3-calc.h"
/**
 * main - main function
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *Return: always
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (num2 == 0 && (!strcmp(operator, "%") || !strcmp(operator, "/")))
	{
		printf("Erro\n");
		exit(100);
	}

	op = get_op_func(operator);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", op(num1, num2));
	return (0);
}
