/*
** EPITECH PROJECT, 2019
** test_remove_smallest_nbr.c
** File description:
** pushswap : tests for function remove_smallest_nbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(remove_smallest_nbr, one_character_in_list)
{
    float list_a[1] = {2};
    float list_b1[2] = {5, 0};
    float expected_b1[2] = {2, 5};
    float list_b2[4] = {7, -6, 5, 0};
    float expected_b2[4] = {2, 7, -6, 5};
    int length_a = 1;
    int length_b1 = 1;
    int length_b2 = 3;

    remove_smallest_nbr(list_a, list_b1, &length_a, &length_b1);
    cr_expect_eq(length_a, 0);
    cr_expect_eq(length_b1, 2);
    cr_expect_arr_eq(list_a, list_a, 1);
    cr_expect_arr_eq(list_b1, expected_b1, 1);
    list_a[0] = 2;
    length_a = 1;
    remove_smallest_nbr(list_a, list_b2, &length_a, &length_b2);
    cr_expect_eq(length_a, 0);
    cr_expect_eq(length_b2, 4);
    cr_expect_arr_eq(list_b2, expected_b2, 4);
}

Test(remove_smallest_nbr, equal_characters, .init=cr_redirect_stdout)
{
    float list_a[3] = {6, 6, 0};
    float expected_a[3] = {6, 0, 0};
    int length_a = 2;
    float list_b[1] = {0};
    float expected_b[1] = {6};
    int length_b = 0;

    remove_smallest_nbr(list_a, list_b, &length_a, &length_b);
    cr_expect_eq(length_a, 1);
    cr_expect_eq(length_b, 1);
    cr_expect_arr_eq(list_a, expected_a, 3);
    cr_expect_arr_eq(list_b, expected_b, 1);
    cr_expect_stdout_eq_str("pb ");
}

Test(remove_smallest_nbr, different_characters, .init=cr_redirect_stdout)
{
    float list_a[3] = {6, -5, 0};
    float expected_a[3] = {6, 6, 0};
    int length_a = 2;
    float list_b[1] = {0};
    float expected_b[1] = {-5};
    int length_b = 0;

    remove_smallest_nbr(list_a, list_b, &length_a, &length_b);
    cr_expect_eq(length_a, 1);
    cr_expect_eq(length_b, 1);
    cr_expect_arr_eq(list_a, expected_a, 3);
    cr_expect_arr_eq(list_b, expected_b, 1);
    cr_expect_stdout_eq_str("ra pb ");
}

