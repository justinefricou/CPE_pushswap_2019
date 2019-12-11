/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** pushswap : main function
*/

#include "../include/pushswap.h"

int main(int argc, char **argv)
{
    int *list_a = NULL;
    int *list_b = NULL;

    if (argc == 2 && my_strcmp(argv[1], "-h") == 0) {
        display_usage();
        return (0);
    } else if (detect_errors(argc, argv)) {
        display_usage();
        return (84);
    }
    if (get_list_a(&list_a, argc, argv) == 84)
        return (84);
    if (get_list_b(&list_b, argc) == 84)
        return (84);
    display_sorting(list_a, list_b, argc - 1);
    free(list_a);
    free(list_b);
    return (0);
}