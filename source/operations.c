/*
** EPITECH PROJECT, 2019
** operations.c
** File description:
** pushswap : operations sa and ra needed in the algorithm
*/

#include "../include/pushswap.h"

// Swaps the first two elements of the list (nothing will happen if there
// aren’t enough elements)
void pushswap_sa(int *list, int length_list)
{
    int nbr = 0;

    write(1, "sa", 2);
    if (length_list > 1) {
        nbr = list[0];
        list[0] = list[1];
        list[1] = nbr;
    }
}

// Rotates the list toward the beginning, the first element will become the last
void pushswap_ra(int *list, int length_list)
{
    int nbr = 0;
    int i = 0;

    write(1, "ra", 2);
    if (length_list > 1) {
        nbr = list[0];
        for ( ; i < length_list; i++)
            list[i] = list[i + 1];
        list[i] = nbr;
    }
}