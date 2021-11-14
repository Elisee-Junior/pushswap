/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "../include/pushswap.h"

int main(int ac, char **av)
{
    Liste *li = init_list(li);
    li = fill_list(li, ac, av);
    sort(&li);
    return (0);
}