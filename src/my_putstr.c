/*
** EPITECH PROJECT, 2021
** My_putstr
** File description:
** No file description
*/

#include "../include/pushswap.h"

int my_putstr(char *str)
{
    for (int x = 0; str[x] != '\0'; x++)
        my_putchar(str[x]);
    return (0);
}
