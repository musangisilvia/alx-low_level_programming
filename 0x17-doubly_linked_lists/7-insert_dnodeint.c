#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a nd=ew node at a given position.
  * @h: double pointer to list.
  * @idx: index of the list where the new node should be added.
  * @n: new node.
  *
  * Return: address of the new node or NULL
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL)
		*h = new_node;
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}
	temp = *h;
	while (temp)
	{
		if (count == idx && idx != 0)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
			temp->prev = new_node;
			break;
		}
		count++;
		temp = temp->next;
	}
	if (count + 1 == idx)
	{
		new_node->prev = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
