#include "lists.h"

/**
 * reverse_listint - reverse a linkeds list
 * @head: pointers to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *nex = NULL;

	while (*head)
	{
		nex = (*head)->nex;
		(*head)->nex = pre;
		pre = *head;
		*head = nex;
	}

	*head = pre;

	return (*head);
}
