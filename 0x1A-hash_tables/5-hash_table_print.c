#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - function to print the key:value from ht
 * @ht: pointer to hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *con;
	int not_fin = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		con = ht->array[i];
		while (con)
		{
			if (not_fin)
				printf(", ");
			printf("'%s': '%s'", con->key, con->value);
			not_fin = 1;
			con = con->next;
		}
	}
	printf("}\n");
}
