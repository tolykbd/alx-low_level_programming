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
	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
