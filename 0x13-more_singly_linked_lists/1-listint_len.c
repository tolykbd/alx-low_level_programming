#include "lists.h"
/**
 * listint_len - prints number of nodes
 * @h: head node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned long int num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
