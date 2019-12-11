/*
** EPITECH PROJECT, 2019
** test_get_list_b.c
** File description:
** pushswap : tests for function get_list_b
*/

#include <criterion/criterion.h>
#include "../include/pushswap.h"

Test(get_list_b, one_number)
{
    int *list_b = NULL;

    cr_expect_eq(get_list_b(&list_b, 1), 0);
    for (int i = 0; i < 1; i++)
        list_b[i] = 0;
    free(list_b);
}

Test(get_list_b, several_numbers)
{
    int *list_b = NULL;

    cr_expect_eq(get_list_b(&list_b, 2), 0);
    for (int i = 0; i < 2; i++)
        list_b[i] = 0;
    free(list_b);
    cr_expect_eq(get_list_b(&list_b, 6), 0);
    for (int i = 0; i < 6; i++)
        list_b[i] = 0;
    free(list_b);
}