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
int is_float(char *str);
int is_sign(char c);
int is_digit(char c);

int get_list_a(float **list_a, int argc, char **argv);
float my_getnbr(char *str);
int get_list_b(float **list_b, int argc);
int ten_to_the_power_of(int power);

int display_sorting(float *list_a, float *list_b, int length_a);
int is_sorted(float *list, int length_list);
void remove_smallest_nbr(float *list_a, float *list_b, int *len_a, int *len_b);
int get_index_smallest_nbr(float *list_a, int length_a);

void pushswap_ra(float *list_a, int length_list_a);
void pushswap_pb(float *list_a, float *list_b, int *length_a, int *length_b);
void pushswap_pa(float *list_a, float *list_b, int *length_a, int *length_b);

#endif //DEF_PUSHSWAP