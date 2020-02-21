/*
** EPITECH PROJECT, 2019
** display_sorting.c
** File description:
** pushswap : sorts the list and displays the operation used at every step
*/

#include "pushswap.h"

int display_sorting(float *list_a, float *list_b, int length_a)
{
    int length_b = 0;

    if (is_sorted(list_a, length_a)) {
        write(1, "\n", 1);
        return (0);
    }
    for ( ; length_a > 0; )
        remove_smallest_nbr(list_a, list_b, &length_a, &length_b);
    for ( ; length_b > 0; ) {
        pushswap_pa(list_a, list_b, &length_a, &length_b);
        if (length_b > 0)
            write(1, " ", 1);
    }
    write(1, "\n", 1);
    return (0);
}

int is_sorted(float *list, int length_list)
{
    for (int i = 0; i < length_list - 1; i++) {
        if (list[i] > list[i + 1])
            return (0);
    }
    return (1);
}

void remove_smallest_nbr(float *list_a, float *list_b, int *len_a, int *len_b)
{
    int index_smaller_int = 0;

    index_smaller_int = get_index_smallest_nbr(list_a, *len_a);
    for (int i = 0; i < index_smaller_int; i++)
        pushswap_ra(list_a, *len_a);
    pushswap_pb(list_a, list_b, len_a, len_b);
}

int get_index_smallest_nbr(float *list_a, int length_a)
{
    int index_smaller_int = 0;

    for (int i = 1; i < length_a; i++) {
        if (list_a[index_smaller_int] > list_a[i])
            index_smaller_int = i;
    }
    return (index_smaller_int);
}