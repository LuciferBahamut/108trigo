/*
** EPITECH PROJECT, 2020
** 108trigo
** File description:
** main
*/

#include "trigo.h"
#include "error_message.h"

int main(int ac, char **av)
{
    if (ac <= 2) {
        write_error(STR_ERROR_NBRARG);
        return (ERROR);
    }
    if (error_handling(ac, av))
        return (ERROR);
    return (SUCCESS);
}
