/*
** EPITECH PROJECT, 2021
** sort
** File description:
** sort
*/

#include "../include/pushswap.h"

void swap_ra(Liste **li)
{
    node **temp = malloc(sizeof(**temp));
    *temp = (*li)->begin;
    *li = push_back((*li), (*temp)->value);
    *li = pop_front(*li);
    my_putstr("ra ");
}

void swap_pa(Liste **src, Liste **dest)
{
    node **temp = malloc(sizeof(**temp));
    *temp = (*src)->begin;
    *dest = push_front(*dest, (*temp)->value);
    *src = pop_front(*src);
    my_putstr("pa ");
}

void swap_pb(Liste **src, Liste **dest)
{
    node **temp = malloc(sizeof(**temp));
    *temp = (*dest)->begin;
    *src = push_front(*src, (*temp)->value);
    *dest = pop_front(*dest);
    my_putstr("pb ");
}
