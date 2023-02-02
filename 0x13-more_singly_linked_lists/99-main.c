#include <stdio.h>

#include <stdlib.h>

#include "lists.h"



/**
 *
 *  * main - check the code .
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{


			listint_t *n;




					n = insert_nodeint_at_index(NULL, 0, 98);

						if (n)

									printf("-> %d\n", n->n);

							else

										printf("(nil)\n");

								return (0);

}
