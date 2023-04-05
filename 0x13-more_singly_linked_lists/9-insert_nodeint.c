#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node in a linked list
 *at a given position
 *@head: pointer to the first node in the list
 *@idx: the new node index
 *@n: data to insert in the new node
 *Returns: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp_node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int counter;

	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (counter = 0; temp_node && counter < idx; counter++)
	{
		if (counter == (idx - 1))
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}
		else
			temp_node = temp_node->next;
	}
	return (NULL);
}
