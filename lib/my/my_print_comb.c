/*
** EPITECH PROJECT, 2020
** my_print_comb
** File description:
** :wq
*/

#include <unistd.h>

int my_aff(int a, int b, int c)
{
    while (c++ < '9') {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
        if(a <= '6' || b <= '7' || c <='8') {
            my_putchar(',');
            my_putchar(' ');
        }
    }
    return (0);
}

int my_print_comb(void)
{
    int a;
    int b;
    int c;

    a = '0' - 1;
    while (a++ <= '9') {
        b = a;
        while (b++ <= '9') {
            c = b;
            my_aff(a, b, c);
        }
    }
    return (0);
}
