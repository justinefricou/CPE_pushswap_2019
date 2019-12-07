/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** pushswap : returns a number, sent to the function as a string.
*/

#include "../include/pushswap.h"

int my_getnbr(char *str)
{
    int nbr = 0;
    int i = 0;

    for ( ; str[i] == '-' || str[i] == '+' || str[i] == '0'; i++);
    for ( ; str[i] != 0; i++)
        nbr = nbr * 10 + (str[i] - 48);
    if (str[0] == '-')
        nbr = nbr * (-1);
    return (nbr);
}