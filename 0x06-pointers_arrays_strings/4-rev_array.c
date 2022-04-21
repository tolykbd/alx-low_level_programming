#include "main.h"
/**
* reverse_array - array is reversed
* @a: array to be reversed
* @n: number of elements
*/
void reverse_array(int *a, int n)
{
	int i, k, s;
	int j[n];

	k = n - 1;
	for (i = 0; i < n; i++)
	{
		j[i] = *(a + i);
	}
	for (s = 0; s < n; s++)
	{
		a[s] = *(j + k);
		k--;
	}
}
