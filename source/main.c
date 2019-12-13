/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** pushswap : main function
*/

#include "../include/pushswap.h"

int main(int argc, char **argv)
{
    int *list_1 = NULL;
    int *list_2 = NULL;
    list list_a, list_b;

    if (detect_errors(argc, argv))
        return (84);
    if (get_list_a(&list_1, argc, argv) == 84)
        return (84);
    if (get_list_b(&list_2, argc) == 84)
        return (84);
    list_a.array = list_1;
    list_a.length = argc - 1;
    list_b.array = list_2;
    list_b.length = 0;
    display_sorting(&list_a, &list_b);
    return (0);
}