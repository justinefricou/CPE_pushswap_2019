/*
** EPITECH PROJECT, 2019
** test_get_list_a.c
** File description:
** pushswap : tests for function get_list_a
*/

#include <criterion/criterion.h>
#include "../include/pushswap.h"

Test(get_list_a, one_number)
{
    int *list = NULL;
    char **argv = NULL;
    char *arg0 = "pushswap";
    char *arg1 = "-00650300";

    argv = malloc(sizeof(char *) * 2);
    argv[0] = arg0;
    argv[1] = arg1;
    get_list_a(&list, 2, argv);
    cr_expect_eq(list[0], -650300);
    cr_expect_null(list[1]);
    free(list);
    free(argv);
}

Test(get_list_a, several_numbers)
{
    int *list = NULL;
    char **argv = NULL;
    char *arg0 = "pushswap";
    char *arg1 = "-548";
    char *arg2 = "0";
    char *arg3 = "+685465";
    argv = malloc(sizeof(char *) * 4);
    argv[0] = arg0;
    argv[1] = arg1;
    argv[2] = arg2;
    argv[3] = arg3;
    get_list_a(&list, 4, argv);
    cr_expect_eq(list[0], -548);
    cr_expect_eq(list[1], 0);
    cr_expect_eq(list[2], 685465);
    cr_expect_null(list[3]);
    free(list);
    free(argv);
}