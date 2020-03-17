/*
** EPITECH PROJECT, 2020
** 108trigo
** File description:
** calc_fact
*/

#include "trigo.h"

double compute_matrix(matrix_t *m, int i, int j)
{
    double factor = 0;

    for (int z = 0; z != m->rows; z++)
        factor += (m->square_matrix[i][z] * m->matrix[z][j]);
    return (factor);
}

double calc_fact(double nb)
{
    for (int i = nb-1; i != 0; i -= 1)
        nb *= i;
    return (nb);
}
