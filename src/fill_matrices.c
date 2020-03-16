/*
** EPITECH PROJECT, 2020
** 108trigo
** File description:
** fill the matrices
*/

#include "trigo.h"

void display_matrix(matrix_t *m)
{
    for (int i = 0; i != m->rows; i++)
        for (int j = 0; j != m->rows; j++) {
            if (j + 1 == m->rows) {
                printf("%.2f\n", m->res_matrix[i][j]);
                break;
            }
            printf("%.2f\t", m->res_matrix[i][j]);
        }
}

void fill_matrices(matrix_t *m, int ac, char **av)
{
    int k = 2;

    m->rows = ceil(sqrt(ac-2));
    m->matrix = malloc(sizeof(double *) * m->rows);
    m->res_matrix = malloc(sizeof(double *) * m->rows);
    for (int i = 0; i != m->rows; i++) {
        m->matrix[i] = malloc(sizeof(double) * m->rows);
        m->res_matrix[i] = malloc(sizeof(double) * m->rows);
        for (int j = 0; j != m->rows; j++, k++) {
            if (k == ac) {
                m->matrix[i][j] = (double) 0;
                m->res_matrix[i][j] = (double) 0;
            }
            else {
                m->matrix[i][j] = atoi(av[k]);
                m->res_matrix[i][j] = atoi(av[k]);
            }
        }
    }
}
