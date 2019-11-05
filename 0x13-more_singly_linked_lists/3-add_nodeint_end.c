#include "lists.h"
/**
 * add_nodeint_end - add a node
 *
 *@head: is a double pointer
 *@n: is a int
 * Return: On succes 1.
 * On error.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
