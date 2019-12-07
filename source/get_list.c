/*
** EPITECH PROJECT, 2019
** get_list.c
** File description:
** pushswap : creates a 2d in array from argv
*/

#include "../include/pushswap.h"

int get_list(int ***list, int argc, char **argv)
{
    *list = malloc(sizeof(int *) * argc);
    if (*list == NULL)
        return (84);
    for (int i = 1; i < argc; i++) {
        (*list)[i - 1] = malloc(sizeof(int));
        *((*list)[i - 1]) = my_getnbr(argv[i]);
    }
    (*list)[argc - 1] = NULL;
    return (0);
}

int my_getnbr(char *str)
{
    int nbr = 0;
    int i = 0;

    for ( ; str[i] == '-' || str[i] == '+' || str[i] == '0'; i++);
    for ( ; str[i] != 0; i++)
        nbr = nbr * 10 + (str[i] - 48);
    if (str[0] == '-')
        nbr = nbr * (-1);
    return (nbr);
}