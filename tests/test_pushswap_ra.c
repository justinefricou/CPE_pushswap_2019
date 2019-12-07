/*
** EPITECH PROJECT, 2019
** test_pushswap_ra.c
** File description:
** pushswap : tests for function pushswap_ra
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/pushswap.h"

Test(pushswap_ra, several_nbrs_in_list, .init=cr_redirect_stdout)
{
    int actual1[3] = {0, 1, 4};
    int actual2[2] = {0, 1};
    int expected1[3] = {1, 4, 0};
    int expected2[2] = {1, 0};

    pushswap_ra(actual1, 3);
    pushswap_ra(actual2, 2);
    cr_assert_arr_eq(actual1, expected1, 3);
    cr_assert_arr_eq(actual2, expected2, 2);
    cr_expect_stdout_eq_str("rara");
}

Test(pushswap_ra, one_nbr_in_list, .init=cr_redirect_stdout)
{
    int actual[1] = {0};

    pushswap_ra(actual, 1);
    cr_assert_arr_eq(actual, actual, 1);
    cr_expect_stdout_eq_str("ra");
}