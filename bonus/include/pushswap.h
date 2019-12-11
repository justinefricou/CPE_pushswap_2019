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

int my_strcmp(char *str1, char *str2);
void display_usage(void);

int detect_errors(int argc, char **argv);
int is_int(char *str);
int is_sign(char c);
int is_digit(char c);

int get_list_a(int **list, int argc, char **argv);
int my_getnbr(char *str);
int get_list_b(int **list_b, int argc);

int display_sorting(int *list_a, int *list_b, int length_a);
int is_sorted(int *list, int length_list);
void remove_smaller_int(int *list_a, int *list_b, int *length_a, int *length_b);
int get_index_smaller_int(int *list_a, int length_a);

void pushswap_ra(int *list_a, int length_list_a);
void pushswap_pb(int *list_a, int *list_b, int *length_a, int *length_b);
void pushswap_pa(int *list_a, int *list_b, int *length_a, int *length_b);

#endif //DEF_PUSHSWAP