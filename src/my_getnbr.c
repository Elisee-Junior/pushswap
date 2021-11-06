/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** my_getnbr
*/

#include "../include/pushswap.h"

int my_getnbr (char *str)
{
    int i = 0, s = 1, n = 0, k = 0;

    for (; str[i] == '-' || str[i] == '+'; i++)
            s = ((str[i] == '-') ? (-1) * s : s);
    for (; str[i] >= '0' && str[i] <= '9' && str[i] != '\0'; i++) {
        k = str[i] - 48, n = n + k ;
        (str[i + 1] != '\0') ? n = n * 10 : 0;
    }
    return (n * s);
}