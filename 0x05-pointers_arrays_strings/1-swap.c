#include "main.h"
/**
* swap_int - swap to variables
* @a: variables to be swaped
* @b: variables to bes swaped
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
