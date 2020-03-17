/*
** EPITECH PROJECT, 2020
** 108trigo
** File description:
** cosh and sinh
*/

#include "trigo.h"

void compute_sinh(matrix_t *m)
{
    double stock = 0;
    double stock1 = 0;

    for (int i = 0; i != m->rows; i++)
        for (int j = 0; j != m->rows; j++)
            m->id_matrix[i][j] = m->res_matrix[i][j];
    display_matrix(m);
}

void compute_cosh(matrix_t *m)
{
}
