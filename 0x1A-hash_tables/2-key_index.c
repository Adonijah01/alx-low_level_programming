#include "hash_tables.h"

/**
 * key_index - give index ofkey.
 * @key: key to get index.
 * @size: size of hash table.
 *
 * Return: Index for key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
/**
 * Adonijah Kiplimo
 */
