#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a node in a linked list at a certain index
 *@head: pointer to the first element in the list
 *@index: index of the node to be deleted
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = *head;
	listint_t *c_node = NULL;
	unsigned int i = 0;

	if (*head == NULL || !head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp_node || !(temp_node->next))
			return (-1);
		temp_node = temp_node->next;
		i++;
	}
	c_node = temp_node->next;
	temp_node->next = c_node->next;
	free(c_node);
	return (1);
}
