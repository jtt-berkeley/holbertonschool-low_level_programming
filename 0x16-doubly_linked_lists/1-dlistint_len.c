#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - prints a list_t list
 * @h: pointer to struct
 * Return: counter
 */
/* Only change is name of function prototype */
size_t dlistint_len(const dlistint_t *h)
{
	size_t  counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
