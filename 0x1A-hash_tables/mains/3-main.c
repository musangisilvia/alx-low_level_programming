#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int index;
    hash_node_t *temp;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    hash_table_set(ht, "heliotropes", "weird");
    hash_table_set(ht, "neurospora", "wow");
    hash_table_set(ht, "heraitas", "very");
    hash_table_set(ht, "mentioner", "weird");
    hash_table_set(ht, "dram", "ooh");
    hash_table_set(ht, "vivency", "woosh");
    index = key_index((const unsigned char *)"dram", 1024);

    temp = ht->array[index];
    while (temp != NULL)
    {
    	printf("Key: %s Value: %s\n", temp->key, temp->value);
	temp = temp->next;
    }

    return (EXIT_SUCCESS);
}
