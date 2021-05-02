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
	{
		*h = new_node;
		return (*h);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	while (temp)
	{
		if (count == idx && idx != 0)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		count++;
		temp = temp->next;
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
