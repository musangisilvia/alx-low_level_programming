# 0x1A-hash_tables

## INTRODUCTION

The hash table is a data structure, that uses keys and values to store data.
The data structures used in this project are:

```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;


/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## TASKS

### 0-hash_table_create.c

A function that creates a hash table.

- Prototype: ``` hash_table_t *hash_table_create(unsigned long int size); ```.
	* where *size* is the size of the array.
- Return: a pointer to the newly created hash table or ``` NULL ```
