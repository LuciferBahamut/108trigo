/*
** EPITECH PROJECT, 2020
** 108trigo
** File description:
** fill the matrices
*/

#include "trigo.h"

void fill_matrices(matrix_t *m, int ac, char **av)
{
    int max = ceil(sqrt(ac-2));
    int k = 2;

    m->matrix = malloc(sizeof(double *) * max);
    m->res_matrix = malloc(sizeof(double *) * max);
    for (int i = 0; i != max; i++) {
        m->matrix[i] = malloc(sizeof(double) * max);
        for (int j = 0; j != max; j++, k++) {
            if (k == ac)
                m->matrix[i][j] = (double) 0;
            else
                m->matrix[i][j] = atoi(av[k]);
        }
    }
}
