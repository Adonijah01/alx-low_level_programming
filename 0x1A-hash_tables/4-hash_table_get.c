#include "hash_tables.h"

/**
 * hash_table_get - to retrieve value associated with the key.
 * @ht: table to retrieve value from it.
 * @key: key to findind value.
 *
 * Return: value associated with key/NULL if key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
/**
 * Adonijah KIplimo
 */
