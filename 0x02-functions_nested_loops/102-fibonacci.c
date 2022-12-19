#include "main.h"
/**
 * main - prints fibonacci sequence
 * Return: 0 on success
 */
int main(void)
{
	long int i, num1, num2, next;

	num1 = 1;
	num2 = 2;
	printf("%li, %li, ", num1, num2);
	for (i = 2; i < 50; i++)
	{
		next = num1 + num2;
		printf("%li", next);
		num1 = num2;
		num2 = next;
		if (i < 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
