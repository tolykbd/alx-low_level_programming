#include "lists.h"
/**
 * pop_listint - delete first node of linked list
 * @head: pointer to the listint_t list
 * Return: data n of deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if ((*head)->next == NULL)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
