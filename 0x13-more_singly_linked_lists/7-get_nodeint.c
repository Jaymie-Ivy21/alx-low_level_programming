#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node
 *				of a listint_t linked list
 * @head: Pointer to the head of the listint_t list
 * @index: the index of the node, starting at 0
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
