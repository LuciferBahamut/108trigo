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
    double stock;
    double stock1;

    for (int i = 0; i != m->rows; i++)
        for (int j = 0; j!= m->rows; j++)
            m->id_matrix[i][j] += m->res_matrix[i][j];
    for (int k = 2; k != 171; k++) {
        for (int i = 0; i != m->rows; i++)
            for (int j = 0; j != m->rows; j++) {
                stock = calc_fact(k);
                stock1 = 
                m->res_matrix[i][j] = stock1 / stock;
                m->id_matrix[i][j] += m->res_matrix[i][j];
            }
        display_matrix(m);
        printf("\n");
    }
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
