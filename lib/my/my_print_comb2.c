/*
** EPITECH PROJECT, 2020
** my_print_comb2
** File description:
** epitech > epita
*/

#include <unistd.h>

int my_nbr(int nb)
{
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + '0');
    }
    else if (nb < 0) {
        my_putchar('-');
        my_nbr(nb * (-1));
    }
    else {
        my_nbr(nb / 10);
        my_nbr(nb % 10);
    }
    return (0);
}

int my_write(int a, int b)
{
    if (a <= 9) {
        my_putchar('0');
    }
    my_nbr(a);
    my_putchar(' ');
    if (b <= 9) {
        my_putchar('0');
    }
    my_nbr(b);
    if (a == 98 && b == 99) {
        return (0);
    }
    my_putchar(',');
    my_putchar(' ');
    return (0);
}

int my_print_comb2(void)
{
    int a = 0;
    int b;
    char max = 99;

    while (a <= max) {
        b = a + 1;
        while (b <= max) {
            my_write(a, b);
            b++;
        }
        a++;
    }
    return (0);
}
