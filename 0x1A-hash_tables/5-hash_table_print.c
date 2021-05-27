#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table.
  * @ht: hash table
  *
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0;
	int flag = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (flag == 0)
					flag = 1;
				else
					printf(", ");

				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
