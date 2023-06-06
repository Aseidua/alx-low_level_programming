#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int max;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->max);
		count++;
		h = h->next;
	}

	return count;
}
