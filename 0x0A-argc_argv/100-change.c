#include "main.h"

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	int coins = 0;

	if (argc == 2)
	{
		int money;

		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}

		money = atoi(argv[1]);
		while (money > 0)
		{
			if (money % 25 == 0)
				money -= 25;
			else if (money % 10 == 0)
				money -= 10;
			else if (money % 5 == 0)
				money -= 5;
			else if (money % 2 == 0)
				money -= 2;
			else
				money -= 1;
			coins++;
		}
		printf("%d\n", coins);
		return (0);
	}

	printf("Error\n");
	return (1);
}
