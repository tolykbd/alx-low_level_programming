#include "function_pointers.h"
/**
* array_iterator - prints name
* @array: array of intergers
* @size: length of array
* @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	while (i != size)
	{
		action(array[i]);
		i++;
	}
}
