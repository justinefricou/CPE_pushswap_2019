/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** Returning a number, sent to the function as a string.
*/

#include "../include/pushswap.h"

int my_getnbr(char *s)
{
    int nbr = 0;
    int i = 0;

    for ( ; s[i] == '-' || s[i] == '+' || s[i] == '0'; i++);
    for ( ; s[i] != 0; i++)
        nbr = nbr * 10 + (s[i] - 48);
    if (s[0] == '-')
        nbr = nbr * (-1);
    return (nbr);
}