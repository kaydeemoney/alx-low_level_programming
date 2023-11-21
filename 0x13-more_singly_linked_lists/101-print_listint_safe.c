#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 * kd
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int kddiff;

	while (head)
	{
		kddiff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (kddiff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
