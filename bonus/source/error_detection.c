/*
** EPITECH PROJECT, 2019
** error_detection.c
** File description:
** pushswap (bonus) : functions to detect errors
*/

#include "../include/pushswap.h"

int detect_errors(int argc, char **argv)
{
    if (argc < 2)
        return (84);
    for (int i = 1; i < argc; i++) {
        if (!is_int(argv[i]) && !is_float(argv[i]))
            return (84);
    }
    return (0);
}

int is_int(char *str)
{
    int i = 0;

    if (is_sign(str[i]))
        i++;
    for ( ; str[i] != 0; i++) {
        if (!is_digit(str[i]))
            return (0);
    }
    return (1);
}

int is_float(char *str)
{
    int i = 0;

    if (is_sign(str[i]))
        i++;
    else if (!is_digit(str[i]))
        return (0);
    for ( ; is_digit(str[i]); i++);
    if (str[i] != '.')
        return (0);
    i++;
    for ( ; is_digit(str[i]); i++);
    if (str[i] != 0)
        return (0);
    return (1);
}

int is_sign(char c)
{
    if (c == '-' || c == '+')
        return (1);
    return (0);
}

int is_digit(char c)
{
    if ('0' <= c && c <= '9')
        return (1);
    return (0);
}