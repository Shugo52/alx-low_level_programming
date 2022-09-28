#include "main.h"
/**
 * _pow_recursion - x power y
 *
 * @x: interger
 * @y: power of y
 * Return: returns x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
