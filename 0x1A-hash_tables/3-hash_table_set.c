#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add (must not be an empty string).
 * @value: The value associated with the key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_copy;
	unsigned long int index, current_index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_index = index;

	while (ht->array[current_index] != NULL)
	{
		if (strcmp(ht->array[current_index]->key, key) == 0)
		{
			free(ht->array[current_index]->value);
			ht->array[current_index]->value = value_copy;
			return (1);
		}
		current_index++;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
