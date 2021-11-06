/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "../include/pushswap.h"

int main(int ac, char **av)
{
    Liste *li = new_list();
    li = fill_list(li, ac, av);
    print_list(li);
    return (0);
}