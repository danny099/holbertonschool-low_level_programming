#include "lists.h"
/**
 * add_node - add a node
 *
 *@head: is a double pointer
 *@str: is a pointer
 * Return: On succes 1.
 * On error.
 */


list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *ptr = malloc(sizeof(list_t));

	if (pte == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
