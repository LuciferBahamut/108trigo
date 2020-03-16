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
    if (ac == 2 && my_strcmp(av[1], "-h"))
        return (display_help());
    if (ac <= 2) {
        write_error(STR_ERROR_NBRARG);
        return (ERROR);
    }
    if (error_handling(ac, av))
        return (ERROR);
    trigo(ac, av);
    return (SUCCESS);
}
