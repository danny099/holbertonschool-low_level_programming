#include "lists.h"
/**
 * add_node_end - add node in the end
 * @head: is adouble pointer;
 * @str: is a pointer
 * Return: On succes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *now = *head;

	int i = 0;

	ptr = malloc(sizeof(ptr));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = NULL;
	if (*head != NULL)
	{
		while (now->next != NULL)
		{
			now = now->next;
		}
		now->next = ptr;
	}
	else
	{
		*head = ptr;
	}
	return (ptr);
}
