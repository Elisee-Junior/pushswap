/*
** EPITECH PROJECT, 2021
** manipulation
** File description:
** manipulation
*/

#include "../include/pushswap.h"

Liste *init_list(Liste *list)
{
    list = malloc(sizeof(list));
    list->begin = NULL;
    list->end = NULL;
    list->length = 0;
    return (list);
}

Liste *push_back(Liste *li, int i)
{
    node *elem;
    elem = malloc(sizeof(*elem));
    check_allocated_node(elem);
    elem->value = i;
    elem->next = NULL;
    elem->prev = NULL;
    if (empty_or_filled(li) == 0) {
        li = malloc(sizeof(*li));
        check_allocated(li);
        li->length = 0;
        li->begin = elem;
        li->end = elem;
    } else {
        li->end->next = elem;
        elem->prev = li->end;
        li->end = elem;
    }
    li->length++;
    return li;
}

Liste *push_front(Liste *li, int i)
{
    node *elem;
    elem = malloc(sizeof(*elem));
    check_allocated_node(elem);
    elem->value = i;
    elem->next = NULL;
    elem->prev = NULL;
    if (empty_or_filled(li) == 0) {
        li = malloc(sizeof(*li));
        check_allocated(li);
        li->length = 0;
        li->begin = elem;
        li->end = elem;
    } else {
        li->begin->prev = elem;
        elem->next = li->begin;
        li->begin = elem;
    }
    li->length++;
    return li;
}

Liste *pop_front(Liste *li)
{
    node *temp = li->begin;
    if (empty_or_filled(li) == 0){
        my_putstr("ok2");
        my_putstr("Liste is empty");
        return (init_list(li));
    }
    if (li->length == 1) {
        li->begin = NULL;
        li->end = NULL;
        return (li);
    }
    li->begin = li->begin->next;
    li->begin->prev = NULL;
    temp->next = NULL;
    temp->prev = NULL;
    free(temp);
    temp = NULL;
    li->length--;
    return li;
}

Liste *pop_back(Liste *li)
{
    node *temp = li->end;
    if (empty_or_filled(li) == 0){
        my_putstr("Liste is empty");
        return (init_list(li));
    }
    if (li->length == 1) {
        my_putstr("ok");
        li->begin = li->end;
        free(li);
        return (NULL);
    }
    li->end = li->end->prev;
    li->end->next = NULL;
    temp->next = NULL;
    temp->prev = NULL;
    free(temp);
    temp = NULL;
    li->length--;
    return li;
}
