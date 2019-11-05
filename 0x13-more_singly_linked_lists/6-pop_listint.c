#include "lists.h"
/**
 * pop_listint - remove first node
 *
 *@head: is a double pointer
 * Return: On succes 1.
 * On error.
 */


int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp;

	if (*head != NULL)
	{
		tmp = *head;
		num = (*head)->n;
		*head = tmp->next;
		free(tmp);
		return (num);
	}
	return (0);
}
