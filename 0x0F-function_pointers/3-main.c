#include "calc.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always
*/
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2, (*action)(int, int);

	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(get_op_func(operator)))
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (!strcmp(operator, "%") || !strcmp(operator, "/")))
	{
		printf("Error\n");
		exit(100);
	}
	action = get_op_func(operator);
	printf("%d\n", action(num1, num2));
	return (0);
}
