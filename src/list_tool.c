/*
** EPITECH PROJECT, 2021
** liste
** File description:
** liste
*/

#include "../include/pushswap.h"

int empty_or_filled(Liste *li)
{
    if (li->begin == NULL)
        return (0);
    return (1);
}

void print_list(Liste *li)
{
    node *temp = li->begin;

    if (li->begin == NULL) {
        my_putstr("Nothing to display.\n");
        return ;
    }
    for (; temp != NULL; temp = temp->next) {
        my_putchar('[');
        my_put_nbr(temp->value);
        my_putstr("] ");
    }
    my_putchar('\n');
}

void check_allocated(Liste *li)
{
    if (li == NULL) {
        write (2, "Erreur : probleme allocation dynamique.\n", 41);
        exit (1);
    }
}

void check_allocated_node(node *li)
{
    if (li == NULL) {
        write (2, "Erreur : probleme allocation dynamique.\n", 41);
        exit (1);
    }
}

Liste *fill_list(Liste *li, int ac, char **av)
{
    int i = 1;

    for (; i < ac; i++)
        li = push_back(li, my_getnbr(av[i]));
    return (li);
}
