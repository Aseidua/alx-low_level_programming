#include "lists.h"

/**
 * free_listint2 - set free a listint_t list
 * @head: double pointer to the list
 * return: no value
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
