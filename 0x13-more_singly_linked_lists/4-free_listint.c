#include "lists.h"

/**
 * free_listint - fre a linked lists
 * @head: listint_t lists to be free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
