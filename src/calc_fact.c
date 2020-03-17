/*
** EPITECH PROJECT, 2020
** 108trigo
** File description:
** calc_fact
*/

#include "trigo.h"

double calc_fact(double nb)
{
    for (int i = nb-1; i != 0; i -= 1)
        nb *= i;
    return (nb);
}
