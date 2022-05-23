#include "lists.h"
/**
 * sum_listint - sum lists
 * @head: pointer to the listint_t list
 * Return: sum of lists
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
