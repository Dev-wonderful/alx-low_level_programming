#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	    hash_table_t *ht;
	    int good;

	        ht = hash_table_create(1024);
		   good =  hash_table_set(ht, "betty", "is soooo cooool");
		    if (good == 1)
			    printf("Worked!\n");

		    return (EXIT_SUCCESS);
}
