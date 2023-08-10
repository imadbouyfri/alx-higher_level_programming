#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
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

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
def islower(c):
def uppercase(str):
def print_last_digit(number):
def add(a, b):
def pow(a, b):
def fizzbuzz():
def remove_char_at(str, n):
def magic_calculation(a, 
listint_t *insert_node(listint_t **head, int number);

#endif /* LISTS_H */