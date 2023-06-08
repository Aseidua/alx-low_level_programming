#include "lists.h"

/**
* free_listint_safe - free the list
* @h: Pointer to head
* Return: success
*/
size_t free_listint_safe(listint_t **h)
{
size_t m = 0;
listint_t *b;

if (!h)
return (m);
while (*h && *h > (*h)->next)
{
b = *h;
*h = (*h)->next;
free(b);
m++;
}
if (*h)
{
free(*h);
*h = NULL;
m++;
}
return (m);
}
