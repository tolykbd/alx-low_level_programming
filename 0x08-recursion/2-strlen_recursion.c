#include "main.h"
/**
* _strlen_recursion - calculates length of string
* @s: string
* Return: number of sring
*/
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(&s[1]));
}
