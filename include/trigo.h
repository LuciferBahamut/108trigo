/*
** EPITECH PROJECT, 2020
** 108trigo
** File description:
** trigo.h
*/

#ifndef __TRIGO_H__
#define __TRIGO_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

typedef struct matrix_t
{
    double **matrix;
    double **res_matrix;
} matrix_t;

void trigo(int ac, char **av);

int display_help(void);

int error_handling(int ac, char **av);
int my_strcmp(char const *str1, char const *str2);
void write_error(char *str);

void fill_matrices(matrix_t *m, int ac, char **av);

#define SUCCESS 0
#define ERROR 84
#define TRUE 1
#define FALSE 0

#endif
