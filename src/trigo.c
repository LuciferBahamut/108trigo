/*
** EPITECH PROJECT, 2020
** 108trigo
** File description:
** trigo
*/

#include "trigo.h"

void compute_sin(matrix_t *m)
{
}

void compute_cos(matrix_t *m)
{
}

void compute_exp(matrix_t *m)
{
}

void trigo(matrix_t *m)
{
    switch (m->mode) {
    case 0 : compute_exp(m);
        break;
    case 1 : compute_cos(m);
        break;
    case 2 : compute_sin(m);
        break;
    case 3 : compute_cosh(m);
        break;
    case 4 : compute_sinh(m);
        break;
    }
}
