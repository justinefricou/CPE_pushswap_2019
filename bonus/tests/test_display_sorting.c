/*
** EPITECH PROJECT, 2019
** test_display_sorting.c
** File description:
** pushswap : tests for function display_sorting
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(display_sorting, one_number, .init=cr_redirect_stdout)
{
    float list_a[1] = {-65};
    float list_b[1] = {0};

    cr_expect_eq(display_sorting(list_a, list_b, 1), 0);
    cr_expect_arr_eq(list_a, list_a, 1);
    cr_expect_stdout_eq_str("\n");
}

Test(display_sorting, sorted_lists, .init=cr_redirect_stdout)
{
    float actual1_a[2] = {-65, 32};
    float actual2_a[3] = {-6, 0, 987};
    float actual3_a[5] = {-5, -5, 65, 65, 785};
    float actual1_b[2] = {0};
    float actual2_b[3] = {0};
    float actual3_b[5] = {0};

    cr_expect_eq(display_sorting(actual1_a, actual1_b, 2), 0);
    cr_expect_eq(display_sorting(actual2_a, actual2_b, 3), 0);
    cr_expect_eq(display_sorting(actual3_a, actual3_b, 5), 0);
    cr_expect_arr_eq(actual1_a, actual1_a, 2);
    cr_expect_arr_eq(actual2_a, actual2_a, 3);
    cr_expect_arr_eq(actual3_a, actual3_a, 5);
    cr_expect_stdout_eq_str("\n\n\n");
}

Test(display_sorting, not_sorted_small_list, .init=cr_redirect_stdout)
{
    float actual1[2] = {32, -65};
    float actual2[3] = {0, -6, 987};
    float actual3[3] = {0, 987, -6};
    float actual1_b[2] = {0};
    float actual2_b[3] = {0};
    float expected1[2] = {-65, 32};
    float expected2[3] = {-6, 0, 987};

    cr_expect_eq(display_sorting(actual1, actual1_b, 2), 0);
    cr_expect_eq(display_sorting(actual2, actual2_b, 3), 0);
    cr_expect_eq(display_sorting(actual3, actual2_b, 3), 0);
    cr_expect_arr_eq(actual1, expected1, 2);
    cr_expect_arr_eq(actual2, expected2, 3);
    cr_expect_arr_eq(actual3, expected2, 3);
    cr_expect_stdout_eq_str("ra pb pb pa pa\n" "ra pb ra pb pb pa pa pa\n"
        "ra ra pb pb pb pa pa pa\n");
}

Test(display_sorting, not_sorted_list, .init=cr_redirect_stdout)
{
    float actual2_a[5] = {-5, 785, 65, 65, -5};
    float actual2_b[5] = {0};
    float expected2[5] = {-5, -5, 65, 65, 785};

    cr_expect_eq(display_sorting(actual2_a, actual2_b, 5), 0);
    cr_expect_arr_eq(actual2_a, expected2, 5);
    cr_expect_stdout_eq_str("pb ra ra ra pb ra pb pb pb pa pa pa pa pa\n");
}