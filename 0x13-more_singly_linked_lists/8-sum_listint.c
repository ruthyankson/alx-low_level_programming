#include "lists.h"

/**
 *sum_listint - calculates the sum of all the data in a listint_t list
 *@head: first node in the linked list
 *Return: resulting sum or (0) if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp_node = head;
	int sum = 0;

	while (temp_node)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}
	return (sum);
}
