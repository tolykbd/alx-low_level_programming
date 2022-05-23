#include "lists.h"
/**
 * get_nodeint_at_index - get node at the index
 * @head: node list
 * @index: index to be found
 * Return: the index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	if (i == index)
		return (head);
	else
		return (NULL);
}
