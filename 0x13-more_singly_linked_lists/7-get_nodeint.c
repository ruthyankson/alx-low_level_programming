#include "lists.h"

/**
 *get_nodeint_at_index - returns the node at a certain index in a linked list
 *@head: first node in the linked list
 *@index: index of the node
 *Return: index of the node or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_node = head;
	unsigned int counter = 0;

	while (temp_node && counter < index)
	{
		temp_node = temp_node->next;
		counter++;
	}
	return (temp_node ? temp_node : NULL);
}
