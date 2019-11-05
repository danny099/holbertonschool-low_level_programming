#include "lists.h"

/**
 * free_listint2 -free a list.
 * @head: ia a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while ((*head)->next != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		free(*head);
		*head = NULL;
	}
}

