/*
** EPITECH PROJECT, 2019
** get_list.c
** File description:
** pushswap (bonus) : creates a 2d in array from argv
*/

#include "../include/pushswap.h"

int get_list_a(int **list_a, int argc, char **argv)
{
    *list_a = malloc(sizeof(int) * (argc - 1));
    if (*list_a == NULL)
        return (84);
    for (int i = 1; i < argc; i++) {
        (*list_a)[i - 1] = my_getnbr(argv[i]);
    }
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

int get_list_b(int **list_b, int argc)
{
    *list_b = malloc(sizeof(int) * (argc - 1));
    if (*list_b == NULL)
        return (84);
    for (int i = 0; i < argc - 1; i++) {
        (*list_b)[i] = 0;
    }
    return (0);
}