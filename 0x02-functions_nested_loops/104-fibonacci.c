#include "main.h"
/**
 * main - print first 98 fibonacci numbers
 * Return: 0 on success
 */
int main(void)
{
	long double num1, num2, next;
	int i;

	num1 = 1;
	num2 = 2;
	printf("1, 2, ");
	for (i = 0; i < 98; i++)
	{
		next = num1 + num2;
		printf("%0.1Lf", next);
		num1 = num2;
		num2 = next;
		if (i < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
