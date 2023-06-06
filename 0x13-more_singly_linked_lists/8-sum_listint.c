#include "lists.h"
/**
 * sum_listint - sum of element list
 * @head: pointer to head of a list
 * Return: the add of all the data (n)
 */

int sum_listint(listint_t *head)
{
	listint_t *headcopy;
	int sum = 0;

	headcopy = head;
	if (headcopy != NULL)
	{
		while (headcopy->next != NULL)
		{
			sum += headcopy->n;
			headcopy = headcopy->next;
		}
		sum += headcopy->n;
		return (sum);
	}
	else
	{
		return (0);
	}
}
