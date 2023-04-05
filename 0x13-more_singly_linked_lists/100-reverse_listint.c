#include "lists.h"
/**
 *reverse_listint - reverses a linked list
 *@head: pointer to the first node in the list
 *Return: pointer to the first node in the reveresed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p_node = NULL;
	listint_t *n_node = NULL;

	while (*head)
	{
		n_node = (*head)->next;
		(*head)->next = p_node->next;
		p_node = *head;
		*head = n_node;
	}
	*head = p_node;
	return (*head);
}
