/*
** EPITECH PROJECT, 2021
** list_tool
** File description:
** list_tool
*/

#include "../include/pushswap.h"

Liste *new_list(void)
{
    return (NULL);
}

int empty_or_filled(Liste *li)
{
    if (li == NULL)
        return (0);
    return (1);
}

void print_list(Liste *li)
{
    if (empty_or_filled(li) == 0) {
        my_putstr("Nothing to display.\n");
        return;
    }
    for (; li != NULL; li = li->next) {
        my_putchar('[');
        my_put_nbr(li->value);
        my_putstr("] ");
    }
    my_putchar('\n');
}

Liste *clear_list(Liste *li)
{
    if (empty_or_filled(li) == 0)
        return (new_list());
    else if (empty_or_filled(li) == 1)
        while (li != NULL)
            li = pop_front_list(li);
}

Liste *fill_list(Liste *li, int ac, char **av)
{
    int i = 1;

    for (; i < ac; i++)
        li = push_back(li, my_getnbr(av[i]));
    return (li);
}
