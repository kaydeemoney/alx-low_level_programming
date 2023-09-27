#include "lists.h"

/**
 * pop_listint - delete the heads nodes of a linked lists
 * @head: pointer to the first element in the linked lists
 *
 * Return: the data inside the element that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (x);
}
