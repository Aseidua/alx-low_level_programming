#include "lists.h"
/**
 * print_listint - print all elements of the list
 * @h: head of the list
 * Return: Always success
 */

size_t print_listint(const listint_t *h)
{
	size_t z = 0;

	for (h != NULL; z++;)
	{
		printf("%d\n", h->p);
		h = h->next;
	}
	return (z);
}
