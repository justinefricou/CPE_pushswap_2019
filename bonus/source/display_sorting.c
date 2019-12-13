/*
** EPITECH PROJECT, 2019
** display_sorting.c
** File description:
** pushswap (bonus) : sorts the list and displays the operation used
*/

#include "../include/pushswap.h"

int display_sorting(list *list_a, list *list_b)
{
    char buffer[100000];
    int length_buffer = 0;

    if (is_sorted(list_a->array, list_a->length)) {
        write(1, "\n", 1);
        return (0);
    }
    for ( ; list_a->length > 0; )
        remove_smaller_int(list_a, list_b, buffer, &length_buffer);
    for ( ; list_b->length > 0; ) {
        pushswap_pa(list_a, list_b);
        add_to_buffer(buffer, "pa", &length_buffer);
        if (list_b->length > 0)
            add_to_buffer(buffer, " ", &length_buffer);
    }
    add_to_buffer(buffer, "\n", &length_buffer);
    write(1, buffer, length_buffer);
    free(list_a->array);
    free(list_b->array);
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

void remove_smaller_int(list *list_a, list *list_b, char *buffer, int *length)
{
    int index_smaller_int = 0;

    index_smaller_int = get_index_smaller_int(list_a);
    for (int i = 0; i < index_smaller_int; i++) {
        pushswap_ra(list_a);
        add_to_buffer(buffer, "ra ", length);
    }
    pushswap_pb(list_a, list_b);
    add_to_buffer(buffer, "pb ", length);
}

int get_index_smaller_int(list *list_a)
{
    int index_smaller_int = 0;

    for (int i = 1; i < list_a->length; i++) {
        if ((list_a->array)[index_smaller_int] > (list_a->array)[i])
            index_smaller_int = i;
    }
    return (index_smaller_int);
}

void add_to_buffer(char *buffer, char *str, int *length_buffer)
{
    int length_str = 0;

    for ( ; str[length_str] != 0; length_str++);
    if (*length_buffer + length_str >= 100000) {
        write(1, buffer, *length_buffer);
        *length_buffer = 0;
    } else {
        for (int i = 0; str[i] != 0; i++)
            buffer[i + *length_buffer] = str[i];
        (*length_buffer) += length_str;
    }
}