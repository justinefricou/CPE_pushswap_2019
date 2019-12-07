/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** pushswap : main function
*/

#include "../include/pushswap.h"

int main(int argc, char **argv)
{
    int **list = NULL;

    if (detect_errors(argc, argv))
        return (84);
    if (get_list(&list, argc, argv) == 84)
        return (84);
    display_sorting(list);
    return (0);
}