#include "lists.h"
/**
 * print_listint - print all elements of the list
 * @h: head of the list
 * Return: success
 */

size_t print_listint(const listint_t *h)
{
	size_t mai;

	for (mai = 0; h != NULL; mai++)
	{
		printf("%d\n", h->max);
		h = h->next;
	}
	return (mai);
}
