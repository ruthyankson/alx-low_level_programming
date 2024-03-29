#include "lists.h"

/**
 *add_nodeint_end - adds a node at the end of a linked list
 *@head: pointer to the first element in the list
 *@n: data to be inserted
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp_node = *head;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp_node->next)
		temp_node = temp_node->next;
	temp_node->next = new_node;
	return (new_node);
}
