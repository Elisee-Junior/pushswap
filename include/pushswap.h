/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** pushswap
*/

#ifndef _PUSHSWAP_
#define _PUSHSWAP_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct node
{
    int value;
    struct node *next;
    struct node *prev;
}node;

typedef struct Liste
{
    int length;
    struct node *begin;
    struct node *end;
}Liste;

void swap_ra(Liste **li);
Liste *init_list(Liste *list);
Liste *pop_back(Liste *li);
void sort(Liste **list);
int my_put_nbr(int nb);
void swap_pb(Liste **src, Liste **dest);
int sort_or_not(Liste *li);
void print_list(Liste *li);
int my_putstr(char *str);
void swap_pa(Liste **src, Liste **dest);
void my_putchar(char c);
Liste *pop_front(Liste *li);
Liste *push_front(Liste *li, int i);
int my_getnbr (char *str);
Liste *push_back(Liste *li, int i);
void check_allocated_node(node *li);
int main(int ac, char **av);
void check_allocated(Liste *li);
int empty_or_filled(Liste *li);
Liste *fill_list(Liste *li, int ac, char **av);
#endif
