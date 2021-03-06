/*
** EPITECH PROJECT, 2019
** test_pushswap_pb.c
** File description:
** pushswap : tests for function pushswap_pb
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(pushswap_pb, empty_list_b, .init=cr_redirect_stdout)
{
    int list_a[5] = {4, 5, 4, 8, 6};
    int list_b[5] = {0, 0, 0, 0, 0};
    int expected_a[5] = {5, 4, 8, 6, 6};
    int expected_b[5] = {4, 0, 0, 0, 0};
    int length_a = 5;
    int length_b = 0;

    pushswap_pb(list_a, list_b, &length_a, &length_b);
    cr_expect_arr_eq(list_a, expected_a, 5);
    cr_expect_arr_eq(list_b, expected_b, 5);
    cr_expect_eq(length_a, 4);
    cr_expect_eq(length_b, 1);
    cr_expect_stdout_eq_str("pb ");
}

Test(pushswap_pb, empty_list_a, .init=cr_redirect_stdout)
{
    int list_a[5] = {0, 0, 0, 0, 0};
    int list_b[5] = {4, 5, 4, 8, 6};
    int length_a = 0;
    int length_b = 5;

    pushswap_pb(list_a, list_b, &length_a, &length_b);
    cr_expect_arr_eq(list_a, list_a, 5);
    cr_expect_arr_eq(list_b, list_b, 5);
    cr_expect_eq(length_a, 0);
    cr_expect_eq(length_b, 5);
    cr_expect_stdout_eq_str("pb ");
}

Test(pushswap_pb, normal_case, .init=cr_redirect_stdout)
{
    int list_a[5] = {4, 5, 4, 8, 8};
    int list_b[5] = {-2, 0, 0, 0, 0};
    int expected_a[5] = {5, 4, 8, 8, 8};
    int expected_b[5] = {4, -2, 0, 0, 0};
    int length_a = 4;
    int length_b = 1;

    pushswap_pb(list_a, list_b, &length_a, &length_b);
    cr_expect_arr_eq(list_a, expected_a, 5);
    cr_expect_arr_eq(list_b, expected_b, 5);
    cr_expect_eq(length_a, 3);
    cr_expect_eq(length_b, 2);
    cr_expect_stdout_eq_str("pb ");
}