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

typedef struct Liste
{
    int value;
    struct Liste *next;
}Liste;

int my_put_nbr(int nb);
int my_getnbr (char *str);
Liste *new_list(void);
void my_putchar(char c);
int my_putstr(char *str);
int my_getnbr (char *str);
void print_list(Liste *li);
Liste *clear_list(Liste *li);
int empty_or_filled(Liste *li);
Liste *pop_back_list(Liste *li);
Liste *pop_front_list(Liste *li);
Liste *push_back(Liste *li, int add);
Liste *push_front_list(Liste *li, int add);
Liste *fill_list(Liste *li, int ac, char **av);

#endif /* !_PUSHSWAP_ */
