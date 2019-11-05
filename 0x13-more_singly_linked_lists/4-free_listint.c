#include "lists.h"

/**
 * free_listint -free a list.
 * @head: ia a pointer
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
