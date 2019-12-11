/*
** EPITECH PROJECT, 2019
** operations.c
** File description:
** pushswap : operations sa and ra needed in the algorithm
*/

#include "../include/pushswap.h"

// Rotates the list toward the beginning, the first element will become the last
void pushswap_ra(int *list_a, int length_list_a)
{
    int nbr = 0;

    write(1, "ra ", 3);
    if (length_list_a > 1) {
        nbr = list_a[0];
        for (int i = 0; i < length_list_a - 1; i++)
            list_a[i] = list_a[i + 1];
        list_a[length_list_a - 1] = nbr;
    }
}

// Takes the first element from l_a and moves it to the first position on l_b
void pushswap_pb(int *list_a, int *list_b, int *length_a, int *length_b)
{
    write(1, "pb ", 3);
    for (int i = (*length_b) - 1; i >= 0; i--)
        list_b[i + 1] = list_b[i];
    list_b[0] = list_a[0];
    for (int i = 0; i < (*length_a) - 1; i++)
        list_a[i] = list_a[i + 1];
    (*length_a)--;
    (*length_b)++;
}

// Takes the first element from l_b and moves it to the first position on l_a
void pushswap_pa(int *list_a, int *list_b, int *length_a, int *length_b)
{
    write(1, "pa", 2);
    for (int i = (*length_a) - 1; i >= 0; i--)
        list_a[i + 1] = list_a[i];
    list_a[0] = list_b[0];
    for (int i = 0; i < (*length_b) - 1; i++)
        list_b[i] = list_b[i + 1];
    (*length_b)--;
    (*length_a)++;
}