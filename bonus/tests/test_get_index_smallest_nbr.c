/*
** EPITECH PROJECT, 2019
** test_get_index_smallest_nbr.c
** File description:
** pushswap : tests for function get_index_smallest_nbr
*/

#include <criterion/criterion.h>
#include "pushswap.h"

Test(get_index_smallest_nbr, one_character)
{
    float list1[1] = {1};

    cr_expect_eq(get_index_smallest_nbr(list1, 1), 0);
}

Test(get_index_smallest_nbr, equal_characters)
{
    float list1[5] = {0};

    cr_expect_eq(get_index_smallest_nbr(list1, 5), 0);
}

Test(get_index_smallest_nbr, different_characters)
{
    float list1[5] = {5, 9, -8, 6, -7};

    cr_expect_eq(get_index_smallest_nbr(list1, 5), 2);
}