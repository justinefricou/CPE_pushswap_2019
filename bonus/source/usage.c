/*
** EPITECH PROJECT, 2019
** usage.c
** File description:
** pushswap (bonus) : fonctions used to display usage
*/

#include "pushswap.h"

int my_strcmp(char *str1, char *str2)
{
    for (int i = 0; str1[i] != 0 && str2[i] != 0; i++) {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
    }
    return (0);
}

void display_usage(void)
{
    write(1, "\nUSAGE\n", 7);
    write(1, "\t./push_swap nb1 [ nb2 [ nb3 ... ] ]\n\n", 38);
    write(1, "DESCRIPTION\n", 12);
    write(1, "\tThe program takes numbers as parameters and sorts\n", 52);
    write(1, "\tthem, while printing the series of operations used.\n\n", 54);
    write(1, "OPERATIONS\n", 11);
    write(1, "\tra\tthe first element of the list will become the last\n", 55);
    write(1, "\tpb\tthe first element of the list will become the first\n", 56);
    write(1, "\t\telement of a second list\n", 27);
    write(1, "\tpa\tthe first element of the second list will become\n", 53);
    write(1, "\t\tthe first element of the first list\n", 38);
}