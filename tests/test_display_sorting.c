/*
** EPITECH PROJECT, 2019
** test_display_sorting.c
** File description:
** pushswap : tests for function display_sorting
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/pushswap.h"

Test(display_sorting, one_number, .init=cr_redirect_stdout)
{
    int list[1] = {-65};

    cr_expect_eq(display_sorting(list, 1), 0);
    cr_expect_arr_eq(list, list, 1);
    cr_expect_stdout_eq_str("\n");
}

Test(display_sorting, sorted_list, .init=cr_redirect_stdout)
{
    int actual1[2] = {-65, 32};
    int actual2[3] = {-6, 0, 987};
    int actual3[5] = {-5, -5, 65, 65, 785};

    cr_expect_eq(display_sorting(actual1, 2), 0);
    cr_expect_eq(display_sorting(actual2, 3), 0);
    cr_expect_eq(display_sorting(actual3, 5), 0);
    cr_expect_arr_eq(actual1, actual1, 2);
    cr_expect_arr_eq(actual2, actual2, 3);
    cr_expect_arr_eq(actual3, actual3, 5);
    cr_expect_stdout_eq_str("\n\n\n");
}

Test(display_sorting, not_sorted_list, .init=cr_redirect_stdout)
{
    int actual1[2] = {32, -65};
    int actual2[3] = {0, -6, 987}, actual3[3] = {0, 987, -6};
    int actual4[3] = {987, -6, 0};
    int actual5[5] = {-5, 785, 65, 65, -5};
    int expected1[2] = {-65, 32};
    int expected2[3] = {-6, 0, 987};
    int expected3[5] = {-5, -5, 65, 65, 785};
    cr_expect_eq(display_sorting(actual1, 2), 0);
    cr_expect_eq(display_sorting(actual2, 3), 0);
    cr_expect_eq(display_sorting(actual3, 3), 0);
    cr_expect_eq(display_sorting(actual4, 3), 0);
    cr_expect_eq(display_sorting(actual5, 5), 0);
    cr_expect_arr_eq(actual1, expected1, 2);
    cr_expect_arr_eq(actual2, expected2, 3);
    cr_expect_arr_eq(actual3, expected2, 3);
    cr_expect_arr_eq(actual4, expected2, 3);
    cr_expect_arr_eq(actual5, expected3, 5);
    cr_expect_stdout_eq_str("sa ra ra\n" "sa ra ra ra\n" "ra sa ra ra sa ra ra "
    "ra\n" "sa ra sa ra ra\n" "ra sa ra sa ra sa ra ra ra ra sa ra ra ra ra sa "
    "ra ra ra ra\n");
}