#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key.
  * @ht: hash table to be looked into.
  * @key: key being looked for.
  *
  * Return: value or Null if not found.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
