#include "lists.h"
/**
 * free_dlistint - print a list
 *
 *@head: is a pointer
 * Return: On succes 1.
 * On error.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
		free(head);
	}
}
