/*
** EPITECH PROJECT, 2019
** pushswap.h
** File description:
** pushswap : header
*/

#ifndef DEF_PUSHSWAP
#define DEF_PUSHSWAP

typedef struct list {
    struct list *previous;
    struct list *next;
    int nb;
} list;

int detect_errors(int argc, char **argv);
int get_list(int argc, char **argv, list *l_a);
void display_sorting(list *l_a);
void sa(list *l_a);
void ra(list *l_a);

#endif //DEF_PUSHSWAP