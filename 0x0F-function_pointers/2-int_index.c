#include "function_pointers.h"
/**
* int_index - prints name
* @array: array of intergers
* @size: length of array
* @cmp: function pointer
* Return: 1 on success -1 otherwise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
