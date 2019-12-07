/*
** EPITECH PROJECT, 2019
** pushswap.h
** File description:
** pushswap : header
*/

#ifndef DEF_PUSHSWAP
#define DEF_PUSHSWAP

#include <stddef.h>

int detect_errors(int argc, char **argv);
int is_int(char *str);
int is_sign(char c);
int is_digit(char c);

int get_list(int ***list, int argc, char **argv);
int my_getnbr(char *str);

void display_sorting(int **list);

#endif //DEF_PUSHSWAP