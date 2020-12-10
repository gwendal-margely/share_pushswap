/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** 01100010 01101001 01101110 01100001 01110010 01111001
*/

#include <unistd.h>

int my_isneg(int n)
{
    int i = n;

    if(i >= 0) {
        my_putchar('P');
    }
    else {
        my_putchar('N');
    }
    return (0);
}
