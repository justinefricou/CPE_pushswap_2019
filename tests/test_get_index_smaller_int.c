/*
** EPITECH PROJECT, 2019
** test_get_index_smaller_int.c
** File description:
** pushswap : tests for function get_index_smaller_int
*/

#include <criterion/criterion.h>
#include "pushswap.h"

Test(get_index_smaller_int, one_character)
{
    int list1[1] = {1};

    cr_expect_eq(get_index_smaller_int(list1, 1), 0);
}

Test(get_index_smaller_int, equal_characters)
{
    int list1[5] = {0};

    cr_expect_eq(get_index_smaller_int(list1, 5), 0);
}

Test(get_index_smaller_int, different_characters)
{
    int list1[5] = {5, 9, -8, 6, -7};

    cr_expect_eq(get_index_smaller_int(list1, 5), 2);
}