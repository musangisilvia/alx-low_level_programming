#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: pointer to pointer of the first element on list.
  * @idx: index of list where the new node should be added.
  * @n: integer to be inserted.
  *
  * Return: address of the new node or NULL if it fails.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int count;

	temp = *head;

	if (temp == NULL)
		return (NULL);

	count = 0;
	while (temp && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		else
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
