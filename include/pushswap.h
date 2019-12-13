/*
** EPITECH PROJECT, 2019
** pushswap.h
** File description:
** pushswap : header
*/

#ifndef DEF_PUSHSWAP
#define DEF_PUSHSWAP

#include <stdlib.h>
#include <unistd.h>

typedef struct list {
    int *array;
    int length;
} list;

int detect_errors(int argc, char **argv);
int is_int(char *str);
int is_sign(char c);
int is_digit(char c);

int get_list_a(int **list, int argc, char **argv);
int my_getnbr(char *str);
int get_list_b(int **list_b, int argc);

void initialize_list(list int_list, int *array, int length);

int display_sorting(list *list_a, list *list_b);
int is_sorted(int *list, int length_list);
void remove_smaller_int(list *list_a, list *list_b, char *buffer);
int get_index_smaller_int(list *list_a);
void display_buffer(char *buffer);

void pushswap_ra(list *list_a);
void pushswap_pb(list *list_a, list *list_b);
void pushswap_pa(list *list_a, list *list_b);

void add_to_buffer(char *buffer, char *str);
int my_strlen(char *str);

#endif //DEF_PUSHSWAP