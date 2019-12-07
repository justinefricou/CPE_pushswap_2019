/*
** EPITECH PROJECT, 2019
** test_detect_errors.c
** File description:
** pushswap : tests for function detect_errors
*/

#include <criterion/criterion.h>
#include "../include/pushswap.h"

Test(detect_errors, no_errors)
{
    char **argv = NULL;
    char *arg0 = "pushswap";
    char *arg1 = "-548";
    char *arg2 = "0";
    char *arg3 = "+685465";
    char *arg4 = "0054";
    char *arg5 = "5";

    argv = malloc(sizeof(char *) * 6);
    argv[0] = arg0;
    argv[1] = arg1;
    argv[2] = arg2;
    argv[3] = arg3;
    argv[4] = arg4;
    argv[5] = arg5;
    cr_expect_eq(detect_errors(6, argv), 0);
    free(argv);
}

Test(detect_errors, not_enough_args)
{
    char **argv = NULL;
    char *arg0 = "pushswap";

    argv = malloc(sizeof(char *));
    argv[0] = arg0;
    cr_expect_eq(detect_errors(1, argv), 84);
    free(argv);
}

Test(detect_errors, not_integers)
{
    char **argv = NULL;
    char *arg0 = "pushswap";
    char *arg1 = "-548a";
    char *arg2 = "0";
    char *arg3 = "+685465";
    char *arg4 = "0054";
    char *arg5 = "5";

    argv = malloc(sizeof(char *) * 6);
    argv[0] = arg0;
    argv[1] = arg1;
    argv[2] = arg2;
    argv[3] = arg3;
    argv[4] = arg4;
    argv[5] = arg5;
    cr_expect_eq(detect_errors(6, argv), 84);
    free(argv);
}