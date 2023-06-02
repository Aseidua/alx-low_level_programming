#include "lists.h"

/**
 * free_list - frees a list_t list function
 * @head: pointer to the list
 *
 *return: success
 */

void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
