#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked lists
 *@h: linked list of type listint_t to traverse
 *Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
