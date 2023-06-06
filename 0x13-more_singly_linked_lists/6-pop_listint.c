#include "lists.h"

/**
 * pop_listint - removes the head node
 * and returns the head node’s data (n).
 * @head: double pointer to head
 *
 * Return: the node value
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;

if (*head == NULL)
return (0);

tmp = *head;
n = tmp->n;
*head = (*head)->next;
free(tmp);

return (n);
}
