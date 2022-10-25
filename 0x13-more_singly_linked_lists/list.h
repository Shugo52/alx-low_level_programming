#ifndef _LIST_H_
#define _LIST_H_
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <strings.h>

#endif
