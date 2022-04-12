#include "main.h"

/**
 * _abs - checks for absolute
 * @n: the numbe to be checked
 * Return: absolute value.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
		return (n * -1);
}
