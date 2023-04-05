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

	
}
