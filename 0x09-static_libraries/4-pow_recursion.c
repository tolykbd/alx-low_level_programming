#include "main.h"
/**
 * _pow_recursion - powers a number
 * @x:number to be powered
 * @y: powers to
 * Return: powered number. -1 if wrong
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
