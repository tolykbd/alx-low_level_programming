#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 * @head: node list
 * @n: integer data to be added
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	listint_t *endhead = *head;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	if (*head == NULL)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->n = n;
		while (endhead->next != NULL)
		{
			endhead = endhead->next;
		}
		endhead->next = temp;
		temp->next = NULL;
	}
	return (temp);
}
