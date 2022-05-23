#include "lists.h"
/**
 * free_listint - free node
 * @head: node list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
