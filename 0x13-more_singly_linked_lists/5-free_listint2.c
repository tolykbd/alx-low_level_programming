#include "lists.h"
/**
 * free_listint2 - free node
 * @head: node list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((current = *head) != NULL)
	{
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
	current = NULL;
}
