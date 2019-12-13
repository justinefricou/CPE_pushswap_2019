/*
** EPITECH PROJECT, 2019
** operations.c
** File description:
** pushswap (bonus) : operations sa and ra needed in the algorithm
*/

#include "../include/pushswap.h"

void pushswap_ra(list *list_a)
{
    int nbr = 0;

    if (list_a->length > 1) {
        nbr = (list_a->array)[0];
        for (int i = 0; i < list_a->length - 1; i++)
            (list_a->array)[i] = (list_a->array)[i + 1];
        (list_a->array)[list_a->length - 1] = nbr;
    }
}

void pushswap_pb(list *list_a, list *list_b)
{
    if (list_a->length > 0) {
        for (int i = list_b->length - 1; i >= 0; i--)
            (list_b->array)[i + 1] = (list_b->array)[i];
        (list_b->array)[0] = (list_a->array)[0];
        for (int i = 0; i < list_a->length - 1; i++)
            (list_a->array)[i] = (list_a->array)[i + 1];
        (list_a->length)--;
        (list_b->length)++;
    }
}

void pushswap_pa(list *list_a, list *list_b)
{
    if (list_b->length > 0) {
        for (int i = list_a->length - 1; i >= 0; i--)
            (list_a->array)[i + 1] = (list_a->array)[i];
        (list_a->array)[0] = (list_b->array)[0];
        for (int i = 0; i < list_b->length - 1; i++)
            (list_b->array)[i] = (list_b->array)[i + 1];
        (list_b->length)--;
        (list_a->length)++;
    }
}

void add_to_buffer(char *buffer, char *str)
{
    int length_buff = 0;
    int length_str = 0;

    length_buff = my_strlen(buffer);
    length_str = my_strlen(str);
    if (length_buff + length_str >= 1000) {
        write(1, buffer, length_buff);
        for (int i = 0; i < 1000; i++)
            buffer[i] = 0;
    } else {
        for (int i = 0; str[i] != 0; i++)
            buffer[i + length_buff] = str[i];
    }
}

int my_strlen(char *str)
{
    int length = 0;

    for ( ; str[length] != 0; length++);
    return (length);
}