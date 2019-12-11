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

int detect_errors(int argc, char **argv);
int is_int(char *str);
int is_sign(char c);
int is_digit(char c);

int get_list_a(int **list, int argc, char **argv);
int my_getnbr(char *str);
int get_list_b(int **list_b, int argc); // à tester

int display_sorting(int *list_a, int *list_b, int length_a); // à tester
int is_sorted(int *list, int length_list); // à tester (display enlevé)
void remove_smaller_int(int *list_a, int *list_b, int *length_a, int *length_b); // à tester
int get_index_smaller_int(int *list_a, int length_a); // à tester

void pushswap_ra(int *list_a, int length_list_a); // tester ?
void pushswap_pb(int *list_a, int *list_b, int *length_a, int *length_b); //tester
void pushswap_pa(int *list_a, int *list_b, int *length_a, int *length_b); // tester

#endif //DEF_PUSHSWAP