#include "lists.h"

/**
 *print_listint - prints all the elements of a linked list
 *@h: linked list of type listint_t to print
 *Return: the number of nodes
 */

size_t print_listint(const struct listint_t *h)
{
	/* size_t - unsigned interger type for loop counting */
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h.data);
		counter++;
		h = h.next;
	}
	return (counter);
}
