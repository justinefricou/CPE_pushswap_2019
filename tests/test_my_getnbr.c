/*
** EPITECH PROJECT, 2019
** test_my_getnbr.c
** File description:
** pushswap : tests for function my_getnbr
*/

#include <criterion/criterion.h>
#include "pushswap.h"

Test(my_getnbr, normal_case)
{
    cr_expect_eq(my_getnbr("0"), 0, "actual : %i", my_getnbr("0"));
    cr_expect_eq(my_getnbr("+0"), 0, "actual : %i", my_getnbr("+0"));
    cr_expect_eq(my_getnbr("-0"), 0, "actual : %i", my_getnbr("-0"));
    cr_expect_eq(my_getnbr("000"), 0, "actual : %i", my_getnbr("000"));
    cr_expect_eq(my_getnbr("2"), 2, "actual : %i", my_getnbr("2"));
    cr_expect_eq(my_getnbr("-5"), -5, "actual : %i", my_getnbr("-5"));
    cr_expect_eq(my_getnbr("+6"), 6, "actual : %i", my_getnbr("+6"));
    cr_expect_eq(my_getnbr("-006"), -6, "actual : %i", my_getnbr("-006"));
    cr_expect_eq(my_getnbr("789456"), 789456, "act. : %i", my_getnbr("789456"));
    cr_expect_eq(my_getnbr("-35746"), -35746, "act. : %i", my_getnbr("-35746"));
    cr_expect_eq(my_getnbr("56800"), 56800, "actual : %i", my_getnbr("56800"));
    cr_expect_eq(my_getnbr("-100"), -100, "actual : %i", my_getnbr("-100"));
}