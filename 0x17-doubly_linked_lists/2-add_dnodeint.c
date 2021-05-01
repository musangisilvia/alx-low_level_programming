#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
  * @head: double pointer to list.
  * @n: new node.
  *
  * Return: address of the new element or NULL.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head  = new_node;
	}

	return (new_node);
}
