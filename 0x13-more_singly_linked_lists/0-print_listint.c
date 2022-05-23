#include "lists.h"
/**
 * print_listint - prints lists of nodes
 * @h: head node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int num;

	num = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
