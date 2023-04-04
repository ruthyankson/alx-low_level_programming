#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: pointer to the linked list
 *Return: the head node’s data (n) or (0) if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;
	return (data);
}
