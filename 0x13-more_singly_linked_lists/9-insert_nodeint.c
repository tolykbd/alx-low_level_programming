#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at the index
 * @head: node list
 * @idx: index location to be inserted
 * @n: data to be inserted
 * Return: inserted node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *tempHead = *head;

	if (!(*head))
		return (NULL);
	while (tempHead)
	{
		if (i == idx - 1)
		{
			temp = malloc(sizeof(listint_t));
			if (!temp)
				return (NULL);
			temp->n = n;
			temp->next = tempHead->next;
			tempHead->next = temp;
			return (temp);
		}
		i++;
		tempHead = tempHead->next;
	}
	return (NULL);
}
