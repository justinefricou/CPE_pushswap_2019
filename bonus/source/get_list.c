/*
** EPITECH PROJECT, 2019
** get_list.c
** File description:
** pushswap (bonus) : creates a 2d in array from argv
*/

#include "pushswap.h"

int get_list_a(float **list_a, int argc, char **argv)
{
    *list_a = malloc(sizeof(float) * (argc - 1));
    if (*list_a == NULL)
        return (84);
    for (int i = 1; i < argc; i++) {
        (*list_a)[i - 1] = my_getnbr(argv[i]);
    }
    return (0);
}

float my_getnbr(char *str)
{
    float nbr = 0;
    float decimal_part = 0;
    int decimal_part_length = 0;
    int i = 0;

    for ( ; str[i] == '-' || str[i] == '+' || str[i] == '0'; i++);
    for ( ; str[i] != 0 && str[i] != '.'; i++)
        nbr = nbr * 10 + (str[i] - 48);
    if (str[i] == '.') {
        i++;
        for ( ; str[i] != 0; i++, decimal_part_length++)
            decimal_part = decimal_part * 10 + (str[i] - 48);
    }
    nbr += decimal_part / ten_to_the_power_of(decimal_part_length);
    if (str[0] == '-')
        nbr *= -1;
    return (nbr);
}

int get_list_b(float **list_b, int argc)
{
    *list_b = malloc(sizeof(float) * (argc - 1));
    if (*list_b == NULL)
        return (84);
    for (int i = 0; i < argc - 1; i++) {
        (*list_b)[i] = 0;
    }
    return (0);
}

int ten_to_the_power_of(int power)
{
    int result = 1;

    for (int i = 0; i < power; i++)
        result *= 10;
    return (result);
}