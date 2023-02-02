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

		listint_t *head;

			listint_t *n;



				head = NULL;

					n = get_nodeint_at_index(head, 0);

						if (n)

									printf("-> %d\n", n->n);

							else

										printf("(nil)\n");

								return (0);

}
