/*
** EPITECH PROJECT, 2019
** display_sorting.c
** File description:
** pushswap : sorts the list and displays the operation used at every step
*/

#include "../include/pushswap.h"

int display_sorting(int *list, int length_list)
{
    if (is_sorted(list, length_list))
        return (0);
    for (int i = 0; i < length_list; i++) {
        if (is_sorted(list, length_list)) {
            write(1, "\n", 1);
            return (0);
        } else if (i != 0)
            write(1, " ", 1);
        go_through_list(list, length_list);
    }
    return (0);
}

int is_sorted(int *list, int length_list)
{
    for (int i = 0; i < length_list - 1; i++) {
        if (list[i] > list[i + 1])
            return (0);
    }
    return (1);
}

void go_through_list(int *list, int length_list)
{
    for (int i = 0; i < length_list; i++) {
        if (i != 0)
            write(1, " ", 1);
        if (i != length_list - 1 && list[0] > list[1])
            pushswap_sa(list, length_list);
        pushswap_ra(list, length_list);
    }
}