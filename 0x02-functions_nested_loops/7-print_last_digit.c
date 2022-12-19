#include "main.h"
/**
 * print_last_digit - prints last digit of number
 *
 * @n: number
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	_putchar('0' + (_abs(n) % 10));
	return (_abs(n) % 10);
}
