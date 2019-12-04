/*
** EPITECH PROJECT, 2019
** pushswap.h
** File description:
** pushswap : header
*/

#ifndef DEF_PUSHSWAP
#define DEF_PUSHSWAP

#include <stddef.h>

typedef struct list {
    struct list *previous;
    struct list *next;
    int nb;
} list;

int detect_errors(int argc, char **argv);
int is_int(char *str);
int is_sign(char c);
int is_digit(char c);
int create_list_unit(list *l_a, list *previous, list *next, int nb);
void free_list_unit(list *l_a);
int get_list(int argc, char **argv, list *l_a);
void free_list(list *l_a);
int my_getnbr(char *s);
void display_sorting(list *l_a);
void sa(list *l_a);
void ra(list *l_a);

#endif //DEF_PUSHSWAP