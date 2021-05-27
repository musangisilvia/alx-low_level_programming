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

### 1-djb2.c

A hash function implementing the djb2 algorithm.

- Prototype: ``` unsigned long int hash_djb2(const unsigned char *str); ```.
- The djb2 algorithm can be found [here](https://alx-intranet.hbtn.io/rltoken/3B7lCUBD4yZh66Pbl2KcEQ).

### 2-key_index.c

A function that gives the index of a key.

- Prototype: ``` unsigned long int key_index(const unsigned char *key, unsigned long int size); ```.
	* where ``` key ``` is the key.
	* and ``` size ``` is the size of the array of the hash table.
- This function uses the ``` hash_djb2 ``` function written in task 1.
- Return: index at which the key/value pair should be stores in the array of the hash table.

### 3-hash_table_set.c

A function that adds an element to the hash table.

- Prototype: ``` int hash_table_set(hash_table_t *ht, const char *key, const char *value); ```.
	* where ``` ht ``` is the hash table you want to add or update the key/value to.
	* ``` key ``` is the key and cannot be an empty string.
	* ``` value ``` is the value associated with the key. must be duplicated, and can be an empty string.
- Return: 1 if it succeeded, 0 otherwise.
- In case of collision, the new node is added at the beginning of the list.
- Tip from [Jennie Chu](https://alx-intranet.hbtn.io/rltoken/vsMUPhrSKKWagt2H3XdWMA): Some strings that collide using the djb2 algorithm are:
	* *hetairas* and *mentioner*
	* *heliotropes* and *neurospora*
	* *depravement* and *serafins*
	* *stylist* and *subgenera*
	* *joyful* and *synaphea*
	* *redescribed* and *urites*
	* *dram* and *vivency*

### 4-hash_table_get.c

A function that retrieves a value associated with a key.

- Prototype: ``` char *hash_table_get(const hash_table_t *ht, const char *key); ```.
	* where ``` ht ``` is the hash table you want to look into.
	* ``` key ``` is the key being looked for.
- Return: value associated with key or NULL if key couldn't be found.

### 5-hash_table_print.c

A function that prints a hash table.

- Prototype: ``` void hash_table_print(const hash_table_t *ht); ```.
	* where ``` ht ``` is the hash table.
- Key/value are printed in the order they appear in the array of hash table.
	* Order: array/list.
- Format:
	* {'Key': 'Value'}
- If ``` ht ``` is NULL nothing is printed.

### 6-hash_table_delete.c

A function that deletes a hash table.

- Prototype: ``` void hash_table_delete(hash_table_t *ht); ```.
	* where ``` ht ``` is the hash table.

### hash_table.h

A header file containing the structure for the hash table, hash node and function prototypes.

