#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 **/
int main(void)
{
	for (int i = 0; i < 10; i++)
		putchar('0' + i);
	for (char a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
