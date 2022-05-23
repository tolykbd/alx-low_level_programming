#include "lists.h"
/**
 * add_nodeint - add node at the beginning
 * @head: node list
 * @n: integer data to be added
 * Return: address of added element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
