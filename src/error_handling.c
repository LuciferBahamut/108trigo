/*
** EPITECH PROJECT, 2020
** 108trigo
** File description:
** error_handling
*/

#include "trigo.h"
#include "error_message.h"

int check_first_arg(char *arg)
{
    char *commands[5];

    commands[0] = "EXP";
    commands[1] = "COS";
    commands[2] = "SIN";
    commands[3] = "COSH";
    commands[4] = "SINH";
    for (int i = 0; i != 5; i++)
        if (my_strcmp(arg, commands[i]))
            return (FALSE);
    write_error(STR_ERROR_FIRARG);
    return (TRUE);
}

int error_handling(int ac, char **av)
{
    if (check_first_arg(av[1]))
        return (TRUE);
    for (int i = 2; i != ac; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] == '-' || av[i][j] == '.')
                continue;
            if (av[i][j] < '0' || av[i][j] > '9') {
                write_error(STR_ERROR_NBR);
                return (TRUE);
            }
        }
    }
    return (FALSE);
}
