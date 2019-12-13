/*
** EPITECH PROJECT, 2019
** display_sorting.c
** File description:
** pushswap : sorts the list and displays the operation used at every step
*/

#include "../include/pushswap.h"

int display_sorting(list *list_a, list *list_b)
{
    char buffer[1000] = {0};

    if (is_sorted(list_a->array, list_a->length)) {
        write(1, "\n", 1);
        return (0);
    }
    for ( ; list_a->length > 0; )
        remove_smaller_int(list_a, list_b, buffer);
    for ( ; list_b->length > 0; ) {
        pushswap_pa(list_a, list_b);
        add_to_buffer(buffer, "pa");
        if (list_b->length > 0)
            add_to_buffer(buffer, " ");
    }
    add_to_buffer(buffer, "\n");
    display_buffer(buffer);
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

void remove_smaller_int(list *list_a, list *list_b, char *buffer)
{
    int index_smaller_int = 0;

    index_smaller_int = get_index_smaller_int(list_a);
    for (int i = 0; i < index_smaller_int; i++) {
        pushswap_ra(list_a);
        add_to_buffer(buffer, "ra ");
    }
    pushswap_pb(list_a, list_b);
    add_to_buffer(buffer, "pb ");
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

void display_buffer(char *buffer)
{
    int length = 0;

    length = my_strlen(buffer);
    write(1, buffer, length);
}