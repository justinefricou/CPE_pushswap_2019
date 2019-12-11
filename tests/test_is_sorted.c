/*
** EPITECH PROJECT, 2019
** test_is_sorted.c
** File description:
** pushswap : tests for function is_sorted
*/

#include <criterion/criterion.h>
#include "../include/pushswap.h"

Test(is_sorted, sorted_case)
{
    int list1[4] = {0, 4, 85, 5604};
    int list2[2] = {456, 457};
    int list3[3] = {52, 52, 52};

    cr_expect_eq(is_sorted(list1, 4), 1);
    cr_expect_eq(is_sorted(list2, 2), 1);
    cr_expect_eq(is_sorted(list3, 3), 1);
}

Test(is_sorted, not_sorted_case)
{
    int list1[5] = {0, 4, 85, 5604, 5603};
    int list2[2] = {458, 457};
    int list3[3] = {52, 52, 51};
    int list4[5] = {0, 4, 5604, 85, 5603};
    int list5[5] = {4, 3, 85, 5604, 5603};

    cr_expect_eq(is_sorted(list1, 5), 0);
    cr_expect_eq(is_sorted(list2, 2), 0);
    cr_expect_eq(is_sorted(list3, 3), 0);
    cr_expect_eq(is_sorted(list4, 5), 0);
    cr_expect_eq(is_sorted(list5, 5), 0);
}

Test(is_sorted, one_number_case)
{
    int list1[1] = {56};

    cr_expect_eq(is_sorted(list1, 1), 1);
}