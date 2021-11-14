/*
** EPITECH PROJECT, 2021
** sort
** File description:
** sort
*/

#include "../include/pushswap.h"

int is_sorted(Liste **list)
{
    if (sort_or_not(*list) == 1) {
        my_putstr("\n");
        return (1);
    }
}

void sort(Liste **list)
{
    int n = 0, i = 0, k = 0, z = 0, j = (*list)->length;
    if (is_sorted(list) == 1)
        return ;
    Liste *li = init_list(li);
    node *temp = (*list)->end;
    for (; n < 32 && sort_or_not(*list) != 1; n++) {
        for (i = 0; i < j; i++) {
            if ((((*list)->begin->value >> n) & 1) == 0)
                swap_pa(list, &li);
            else
                swap_ra(list);
        }
        for (; li->begin != NULL; )
            swap_pb(list, &li);
        n++;
    }
    for (; (*list)->begin->value >= 0 && z < j; z++)
        swap_ra(list);
    my_putstr("sa sa\n");
}
