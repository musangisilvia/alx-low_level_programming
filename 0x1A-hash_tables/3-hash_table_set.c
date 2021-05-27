#include "hash_tables.h"

/**
  * hash_table_set - adda an element to the hash table.
  * @ht: has tab;e to add or update the key value to
  * @key: key (string cannot be empty).
  * @value: associated with key, (can be an empty string).
  *
  * Return: 1 if successful 0 if not.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);

	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
