#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * kd
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int kddiff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		kddiff = *h - (*h)->next;
		if (kddiff > 0)
		{
			temp = (*h)->next;
			*h = temp;
			len++;
		}
		else
		{
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
