#include "function_pointers.h"
/**
* int_index - prints name
* @array: array of intergers
* @size: length of array
* @cmp: function pointer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
