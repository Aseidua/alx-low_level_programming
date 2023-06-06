#include "lists.h"

/**
 * listint_len - return number of element in a linked listint_t.
 * @h: Pointer to list
 *
 * Return: Success.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	while (count == 0 && h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
