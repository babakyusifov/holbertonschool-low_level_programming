#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: header node of singly linked list
 * Return: A number of nodes
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			c++;
		}
		else
		{
			h = h->next;
			c++;
		}
	}
	return (c);
}
