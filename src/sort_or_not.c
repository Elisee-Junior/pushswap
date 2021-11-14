/*
** EPITECH PROJECT, 2021
** sort_or_not
** File description:
** sort_or_not
*/

#include "../include/pushswap.h"

int sort_or_not(Liste *li)
{
    int b, c;
    node *temp = li->begin;
    for (; temp->next != NULL; ) {
        b = temp->value;
        temp = temp->next;
        c = temp->value;
        if (b > c)
            return (0);
    }
    return (1);
}
