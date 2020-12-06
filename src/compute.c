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

void compute_square_matrix(matrix_t *m)
{
    for (int k = 0; k != 2; k++)
        for (int i = 0; i != m->rows; i++)
            for (int j = 0; j != m->rows; j++) {
                m->res_matrix[i][j] = compute_matrix(m, i, j);
                replenish_square_matrix(m);
            }
}

double calc_fact(double nb)
{
    for (int i = nb-1; i != 0; i -= 1)
        nb *= i;
    return (nb);
}
