#include "lists.h"

/**
 * listint_len - Returns the number of elements in a function linked list.
 * @h: Pointer to the list.
 *
 * Return: success nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
