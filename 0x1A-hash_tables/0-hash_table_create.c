#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table.
  * @size: size of the array.
  *
  * Return: pointer to newly created hash table.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t;
	unsigned long int i;

	/* create a table size of the struct for table */
	new_t = malloc(sizeof(hash_table_t));
	if (new_t == NULL || size == 0)
		return (NULL);

	/* create an array of size size array is a member of struct table */
	new_t->array = malloc(sizeof(void *) * size);
	if (new_t->array == NULL)
		return (NULL);

	new_t->size = size;

	/* initialize the array to null */
	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;

	return (new_t);
}
