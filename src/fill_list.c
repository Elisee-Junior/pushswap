/*
** EPITECH PROJECT, 2021
** fill_list
** File description:
** fill_list
*/

#include "../include/pushswap.h"

Liste *push_back(Liste *li, int add)
{
    Liste *element = malloc(sizeof(Liste));

    element->value = add;
    element->next = NULL;
    if (empty_or_filled(li) == 0)
        return (element);
    Liste *clone = li;

    for (; clone->next != NULL; clone = clone->next);
    clone->next = element;
    return (li);
}

Liste *push_front_list(Liste *li, int add)
{
    Liste *element = malloc(sizeof(Liste));

    element->value = add;
    if (empty_or_filled(li) == 0)
        element->next = NULL;
    else if (empty_or_filled(li) == 1)
        element->next = li;
    return (element);
}

Liste *pop_front_list(Liste *li)
{
    if (empty_or_filled(li) == 0)
        return (new_list());
    Liste *element = malloc(sizeof(Liste));

    element = li->next;
    free(li);
    li = NULL;
    return (element);
}

Liste *pop_back_list(Liste *li)
{
    if (empty_or_filled(li) == 0)
        return (new_list());
    if (li->next == NULL) {
        free(li);
        li = NULL;
        return (new_list());
    }
    Liste *clone = li;
    Liste *before = li;

    for (; clone->next != NULL; clone = clone->next)
        before = clone;
    before->next = NULL;
    free(clone);
    clone = NULL;

    return (li);
}
