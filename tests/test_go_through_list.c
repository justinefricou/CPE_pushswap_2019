/*
** EPITECH PROJECT, 2019
** test_go_through_list.c
** File description:
** pushswap : tests for function go_through_list
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/pushswap.h"

Test(go_through_list, one_number)
{
    int list[1] = {68755};

    go_through_list(list, 1);
    cr_expect_arr_eq(list, list, 1);
}

Test(go_through_list, already_sorted_list, .init=cr_redirect_stdout)
{
    int actual1[2] = {-4, 2};
    int actual2[3] = {-65, 0, 65874};
    int actual3[4] = {-54, -54, 57, 57};
    int actual4[5] = {-54, -1, 0, 6543, 6544};

    go_through_list(actual1, 2);
    go_through_list(actual2, 3);
    go_through_list(actual3, 4);
    go_through_list(actual4, 5);
    cr_expect_arr_eq(actual1, actual1, 2);
    cr_expect_arr_eq(actual2, actual2, 3);
    cr_expect_arr_eq(actual3, actual3, 4);
    cr_expect_arr_eq(actual4, actual4, 5);
    cr_expect_stdout_eq_str("rara" "rarara" "rararara" "rarararara");
}

Test(go_through_list, not_sorted_list, .init=cr_redirect_stdout)
{
    int actual1[2] = {4, 2};
    int actual2[3] = {65, 0, 65874};
    int actual3[3] = {658740, 65, 0};
    int actual4[5] = {54, -1, 0, 7543, 6544};
    int expected1[2] = {2, 4};
    int expected2[3] = {0, 65, 65874};
    int expected3[3] = {65, 0, 658740};
    int expected4[5] = {-1, 0, 54, 6544, 7543};

    go_through_list(actual1, 2);
    go_through_list(actual2, 3);
    go_through_list(actual3, 3);
    go_through_list(actual4, 5);
    cr_expect_arr_eq(actual1, expected1, 2);
    cr_expect_arr_eq(actual2, expected2, 3);
    cr_expect_arr_eq(actual3, expected3, 3);
    cr_expect_arr_eq(actual4, expected4, 5);
    cr_expect_stdout_eq_str("sarara""sararara""sarasarara""sarasararasarara");
}