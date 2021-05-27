#include "hash_tables.h"

/**
  * key_index - returns index of a key.
  * @key: the key.
  * @size: size of the array.
  *
  *Return: index of a key in an array.
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
