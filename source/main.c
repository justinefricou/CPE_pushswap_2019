/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** pushswap : main function
*/

#include "../include/pushswap.h"

int main(int argc, char **argv)
{
    list *l_a = NULL;

    if (detect_errors(argc, argv))
        return (84);
    if (get_list(l_a) == 84)
        return (84);
    display_sorting(l_a);
    return (0);
}