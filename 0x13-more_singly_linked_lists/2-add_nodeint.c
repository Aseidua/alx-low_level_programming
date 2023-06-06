#include "lists.h"

/**
 * add_nodeint - issues a new node at listint-t
 * @head: pointer to the head
 * @n: int value
 *
 * Return: Success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

if (!head)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
